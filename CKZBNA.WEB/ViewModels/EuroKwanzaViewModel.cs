using CKZBNA.WEB.Helpers;
using CKZBNA.WEB.Models;
using CKZBNA.WEB.Services;
using System.Net.Http.Json;

namespace CKZBNA.WEB.ViewModels
{
    public class EuroKwanzaViewModel
    {
        private readonly JsService _js;
        private readonly HttpClient _http;
        public IEnumerable<string>? Bancos { get; private set; }
        public  Eurokwanza Model { get; private set; }
        public StatusEnum Status { get; private set; }
        public string Mensagem { get; private set; }
        public string ValorCalculado { get; private set; }
        public EuroKwanzaViewModel(HttpClient http, JsService js)
        {
            _http = http;
            _js = js;
            Model = new Eurokwanza();
            Mensagem= string.Empty;
            ValorCalculado = string.Empty;
        }

        #region Metodos auxliar privados
        private async Task BuscarInformacaoBNA()
        {
            var dados = await _http.GetFromJsonAsync<BNA[]>(Settings.UrlBna);
            if (dados?.Length > 0)
                await _js.SetConteudoBna(dados[0].Taxas);

        }


       private  async Task CarregarListaBancos()
       {
            Bancos = await _js.GetBancos();
            Model.Banco = await _js.GetBanco();
            await ObterValorEuro(Model.Banco);

       }

       async Task ObterValorEuro(string banco)
        {
            if (string.IsNullOrWhiteSpace(banco)) return;

            Model.kwanzaEuro = await _js.GetValorDoEuro(banco);
            await _js.SetBanco(banco);

       }

        #endregion
        public async Task CarregarDados()
        {
            Status = StatusEnum.Carregando;
            try
            {
                Model.Taxa = await _js.GetTaxa();

                await BuscarInformacaoBNA();
                await CarregarListaBancos();

                Model.DataBna = await _js.GetDataBNA();

                Status = StatusEnum.Finalizado;
            }
            catch (Exception ex)
            {
                Status = StatusEnum.Error;
                Mensagem = ex.Message;
            }

         
        }

        #region Metodo para calculos

        private void CalcKwanza()
        {
            if (Model.Taxa == 0) return;

            ValorCalculado = $"{(Math.Round(Model.kwanza / Model.kwanzaEuroTaxa, 2)).ToString("#,#0.00")} Euro.";
        }

        private void CalcEuro()
        {
            if (Model.Taxa == 0) return;

            ValorCalculado = $"{(Math.Round(Model.Euro * Model.kwanzaEuroTaxa, 2)).ToString("#,#0.00")} Kz.";
        }


        public async Task OnTaxa(decimal value)
        {

            Model.Taxa = value;
            await _js.SetTaxa(value);

            if (ValorCalculado.Contains("Kz"))
            {
                CalcEuro();

            }
            else if (ValorCalculado.Contains("Euro"))
            {
                CalcKwanza();
            }


        }


        public void OnKwanza(decimal value)
        {
            if (Model.kwanzaEuro == 0) return;

            Model.kwanza = value;

            if (value == 0) return;

            Model.Euro = Model.kwanza / Model.kwanzaEuroTaxa;

            CalcKwanza();

        }


       public void OnEuro(decimal value)
        {
            if (Model.kwanzaEuro == 0) return;
            Model.Euro = value;
            if (value == 0) return;

            Model.kwanza = Model.Euro * Model.kwanzaEuro;

            CalcEuro();

        }


       public async Task OnChangeBanco(object value)
        {

            if (value == null) return;

            if (((string)value).Length == 0) return;

            await ObterValorEuro((string)value);

        }


        public async Task OnActualizar()
        {
            Status = StatusEnum.Carregando;
            try
            {
                await CarregarDados();
                Status = StatusEnum.Finalizado;
            }
            catch
            {
                Status = StatusEnum.Error;
            }
       

        }

        #endregion
    }
}
