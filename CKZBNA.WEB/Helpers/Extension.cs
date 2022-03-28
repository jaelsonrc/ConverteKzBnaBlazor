namespace CKZBNA.WEB.Helpers
{
    public static class Extension
    {
        public static string ToMoeda(this decimal valor)
        {
            return Math.Round(valor, 2).ToString("#,#0.00");
        }
    }
}
