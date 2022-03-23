namespace CKZBNA.WEB.Helpers
{
    public static class Settings
    {
        public static string UrlBna { get; set; }

        static Settings()
        {
            UrlBna = "https://www.bna.ao/service/rest/generic/sharepoint/multi/search?whichUrl=Taxas%20de%20C%C3%A2mbio";
        }
    }
}
