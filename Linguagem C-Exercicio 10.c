// Online C compiler to run C program online
#include <stdio.h>

int main() {
int resultado,d1,d2,escolha;

printf("Digite 1 para impar ou 2 para par alice: ");
scanf("%d", &escolha);

if(escolha==1)
{
    printf("Alice é impar e Bob par");
}
else 
{
    printf("Alice é par e Bob impar");
}

printf("\nAlice digite um número: ");
scanf("%d", &d1);
printf("Bob digite um número: ");
scanf("%d", &d2);

resultado = d1+d2;

if(resultado % 2==0)
{
printf("0");
}
else
{
    printf("1");
}

}
