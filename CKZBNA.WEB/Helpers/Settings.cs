namespace CKZBNA.WEB.Helpers
{
    public static class Settings
    {
        public static string UrlBna { get; private set; }
        public static string UrlWise { get; private set; }

        static Settings()
        {
            UrlBna = "https://www.bna.ao/service/rest/generic/sharepoint/multi/search?whichUrl=Taxas%20de%20C%C3%A2mbio";
            UrlWise = "https://transferwise.com/gateway/v3/quotes/";
        }
    }
}
