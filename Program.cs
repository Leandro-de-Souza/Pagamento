using System;
using System.Globalization;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PROBLEMA_PAGAMENTO {
    internal class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int horas;
            double valor, pagamento;
            string nomes;

            Console.Write("Nome: ");
            nomes = Console.ReadLine();
            Console.Write("Valor por hora: ");
            valor = double.Parse(Console.ReadLine(), CI);
            Console.Write("Horas trabalhadas: ");
            horas = int.Parse(Console.ReadLine());

            pagamento = (double)horas * valor;

            Console.WriteLine("O pagamento para " + nomes + " deve ser " + pagamento.ToString("F2", CI));

        }
    }
}
