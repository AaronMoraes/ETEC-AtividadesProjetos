// Online C compiler to run C program online
#include <stdio.h>
int main() {
    
int numero,su,ant;
printf("Escreva um nÃºmero:");
scanf("%d",&numero);

su= (numero+1);
ant= (numero-1);

if (numero%10==0) 
{
printf("O sucessor desse nÃºmero Ã©: %d",su);
printf("\nO antecessor desse nÃºmero Ã©: %d",ant);
}
else
{
    printf("Esse nÃºmero nÃ£o Ã© divisivel por 10!");
}
 
 
    return 0;
}
