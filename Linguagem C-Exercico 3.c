// Online C compiler to run C program online
#include <stdio.h>

int main() {
//Efetuar o cálculo do salário final do funcionário/vendedor de uma empresa no ramo do varejo de eletrodoméstico. O salário final é composto por: 
float salariofinal,salariomensal,txcomissao,numdevendas;

//entrada
printf ("Informe o seu salário mensal: ");
scanf ("%f", &salariomensal);
printf ("Informe sua taxa de comissão: ");
scanf ("%f", &txcomissao);
printf ("Informe o seu numero de vendas: ");
scanf ("%f", &numdevendas);

//processamento
salariofinal= salariomensal+(salariomensal*(txcomissao/100)*numdevendas);

//saida
printf("Seu salário final fica em torno de :%.4f", salariofinal);
    
    return 0;
}
