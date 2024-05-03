// Online C compiler to run C program online
#include <stdio.h>
int main() {
    
float vt,maca,morango,fruta;
printf("Quantos KG de maça foram comprados:");
scanf("%f",&maca);
printf("Quantos KG de morango foram comprados:");
scanf("%f",&morango);

fruta = (maca+morango);

if (fruta>=8) 
{
  printf("Você recebeu desconto em sua compra!");
}
else
{
    printf("Não foi possível adicionar desconto nessa compra!");
}
 
 
    return 0;
}
