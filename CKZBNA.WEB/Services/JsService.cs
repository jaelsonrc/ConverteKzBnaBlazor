using Microsoft.JSInterop;
using System.Globalization;

namespace CKZBNA.WEB.Services
{
    public class JsService
    {
        private const string KEY_TAXA = "taxa";
        private const string KEY_BANCO = "bancoSelecionado";

        private readonly IJSRuntime _js;
        public JsService(IJSRuntime js)
        {
            _js = js;
        }


        public async Task<string> GetItem(string key)
        {
            try
            {
                string? strValue = await _js.InvokeAsync<string>("getItem", key);
                if (!string.IsNullOrEmpty(strValue))
                    return strValue;

                return string.Empty;
            }
            catch
            {
                return string.Empty;
            }
        }

        public async Task SetItem(string key, string value)
        {
            try
            {
                await _js.InvokeVoidAsync("setItem", key, value);
            }
            catch
            {
            }
        }

        public async Task<string> GetDataBNA()
        {
            try
            {
                var str = await _js.InvokeAsync<string>("ObterDataActualizacao");
                if (!string.IsNullOrEmpty(str))
                    return str;

                return string.Empty;
            }
            catch
            {
                return string.Empty;

            }
        }

        public async Task<decimal> GetTaxa()
        {
            var strTaxa = await GetItem(KEY_TAXA);
            if (!string.IsNullOrEmpty(strTaxa))
                return decimal.Parse(strTaxa);

            return 0M;
        }
        
        public async Task SetTaxa(decimal taxa)
        {
            await SetItem(KEY_TAXA, taxa.ToString());
        }

        public async Task SetConteudoBna(string strHtml)
        {
            try
            {
                await _js.InvokeVoidAsync("SetDomHtml", strHtml);
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Error jsSerice linha 78 - {ex.Message}");
                throw;
            }
        }

        public async Task<string[]?> GetBancos()
        {
            var strBancos = await _js.InvokeAsync<string>("ObterListaDeBancos");

            if (string.IsNullOrWhiteSpace(strBancos)) 
                return null;

            return strBancos.Split(";");
        }

        public async Task<string> GetBanco()
        {
            var banco = await GetItem(KEY_BANCO);
            if(!string.IsNullOrEmpty(banco))
                return banco;

            return string.Empty;
        }

        public async Task SetBanco(string strBanco)
        {
            await SetItem(KEY_BANCO, strBanco);
        }

        public async Task<decimal> GetValorDoEuro( string banco)
        {
            var valor = await _js.InvokeAsync<string>("ObterValorDoEuro", banco);
            var euro =decimal.Parse(valor.Replace(",", "."), CultureInfo.InvariantCulture);
            return euro;
        }

    }
}
