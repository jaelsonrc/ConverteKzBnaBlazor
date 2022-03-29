namespace CKZBNA.WEB.Models
{
    /*
 *   rate: double.parse(data["rate"].toString()),
targetAmount:
    double.parse(data["paymentOptions"][0]["targetAmount"].toString()),
total:
    double.parse(data["paymentOptions"][0]["fee"]["total"].toString()));
 */

    public class WiseResponse
    {
        public decimal rate { get; set; }
        public IList<PaymentOptions> paymentOptions { get; set; }

        public decimal GetTotal()
        {
            if(paymentOptions?.Count >0)
               return  paymentOptions[0].targetAmount - paymentOptions[0].fee.total;

            return 0;
        }

    }

    public class PaymentOptions
    {
        public decimal targetAmount { get; set; }
        public Fee fee { get; set; }

    }

    public class Fee
    {
        public decimal total { get; set; }  
    }

    

}
