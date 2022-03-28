namespace CKZBNA.WEB.Models
{
    public class Eurokwanza
    {
        public string Banco { get;set;}
        public string DataBna { get; set; }
        public decimal Taxa { get; set; }
        public decimal Euro { get; set; }
        public decimal kwanza { get; set; }
        public decimal kwanzaEuro { get; set; }
        public decimal kwanzaEuroTaxa{ get {

                if(kwanzaEuro == 0) return 0;
            
                if(Taxa == 0 || kwanza==0) return kwanzaEuro;

                var calc = (kwanza - (kwanza * (Taxa / 100))) / kwanzaEuro;

                calc = kwanza / calc;


                 calc = Math.Round(calc, 2);
                if (calc == 0) return kwanzaEuro;

                return calc;

            }
        }

        public decimal kwanzaTaxa
        {
            get
            {

                if (kwanzaEuro == 0) return 0;

                if (Taxa == 0 || kwanza == 0) return 0;

                var calc = (kwanza * (Taxa / 100));
                     

                calc = Math.Round(calc, 2);
                if (calc == 0) return 0;

                return calc;

            }
        }

    }
}
