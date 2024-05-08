// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
int x,y;

printf("Escreva o número X: ");
    scanf("%d",&x);
    
printf("Escreva o número Y: ");
    scanf("%d",&y);


if (x<1)
{
    x=y;
printf("Y = %d",y);
}
else
 if (x==1)
 {
     y=0;
printf("Y = %d ",y);
}
else
if (x>1)
{
    y= pow(x,2);
printf("Y = %d \n ",y);
}  
 else
 {
     printf("Número não correspondente");
 }

    return 0;
