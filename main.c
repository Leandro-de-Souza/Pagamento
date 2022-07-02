#include <stdio.h>


int main()
{

     char nome[80];
     double valorHora, pagamento;
     int horaTrab;

     printf("Nome: ");
     gets(nome);

     printf("Valor por hora: ");
     scanf("%lf", &valorHora);

     printf("Horas trabalhadas: ");
     scanf("%d", &horaTrab);

     pagamento = valorHora * horaTrab;

     printf("O pagamento para %s deve ser %.2lf", nome, pagamento);



    return 0;
}
