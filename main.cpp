#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

        int horas;
        double valor, pagamento;
        string nomes;

        cout << "Nome: ";
        getline(cin, nomes);
        cout << "Valor por hora: ";
        cin >> valor;
        cout << "Horas trabalhadas: ";
        cin >> horas;

        pagamento = (double) horas * valor;

        cout << fixed << setprecision(2);
        cout << "O pagamento para " << nomes << " deve ser " << pagamento << endl;



    return 0;
}
