namespace CKZBNA.WEB.Models
{
    public class Eurokwanza
    {
        public decimal Taxa { get; set; }
        public decimal Euro { get; set; }
        public decimal kwanza { get; set; }
        public decimal kwanzaEuro { get; set; }
        public decimal kwanzaEuroTaxa{ get {

                if(Euro == 0) return 0;
                var calc = Math.Round((kwanza + (kwanza * Taxa)) / Euro, 2);
                if (calc == 0) return kwanzaEuro;

                return calc;

            }
        }

    }
}
