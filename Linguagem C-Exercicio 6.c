		// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
float peso,imc,altura;
printf("Coloque sua altura no espaço:");
scanf("%f",&altura);
printf("Coloque seu peso no espaço:");
scanf("%f", &peso);

imc= peso/(altura*altura);

if (imc<18.5)
{
  printf("Estado de magreza!");
}
else
 if ((imc>18.5) &&  (imc<24.9))
 {
    printf("Estado Saudável");
}

 else
if ((imc>25.0) && (imc<29.9))
{
printf("Estado de sobrepeso");
 }
 else 
     if ((imc>30.0) && (imc<34.9))
     {
     printf("Estado de Obesidade 1");
 }
 else 
     if ((imc>35.0) && (imc<39.9))
     {
     printf("Estado de Obesidade 2");
 }
 else 
 if (imc>=40)
 {
     printf("Estado de Obesidade 3");

 }
 else 
 {
 ("Procure um médico urgente!");
}
 
    return 0;
 }
