using CKZBNA.WEB.Helpers;
using CKZBNA.WEB.Models;
using System.Net.Http.Json;

namespace CKZBNA.WEB.Repositories
{
    public class Repository
    {
        private readonly HttpClient _http;
        public Repository(HttpClient http)
        {
            _http = http;
        }
        public async Task<string> GetBNA()
        {
            var dados = await _http.GetFromJsonAsync<BNA[]>(Settings.UrlBna);
            if (dados?.Length > 0)
                return dados[0].Taxas;

            return string.Empty;
        }
        public async Task<decimal?> GetWise(decimal euroValor)
        {
            var response = await _http.PostAsJsonAsync(Settings.UrlWise, new WiseRequest(euroValor));
            var retorno= await response.Content.ReadFromJsonAsync<WiseResponse>();

            return retorno?.GetTotal();
        }
    }
}
