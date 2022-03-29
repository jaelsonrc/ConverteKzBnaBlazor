namespace CKZBNA.WEB.Models
{
    public class WiseRequest
    {
        public bool guaranteedTargetAmount { get; set; }
        public decimal sourceAmount { get; set; }
        public string targetAmount { get; set; }
        public string sourceCurrency { get; set; }
        public WiseRequest(decimal valorEuro)
        {
            guaranteedTargetAmount = false;
            sourceAmount = valorEuro == 0 ? 100M: valorEuro;
            sourceCurrency = "EUR";
            targetAmount = "BRL";
        }
  
    }
}
