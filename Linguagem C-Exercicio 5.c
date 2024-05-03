// Online C compiler to run C program online
#include <stdio.h>

int main() {
//Faça um programa que calcule e mostre a área de um losango
float area, diagonalmaior,diagonalmenor;

//entrada
printf ("Informe o valor da diagonal maior: ");
scanf ("%f", &diagonalmaior);
printf ("Informe o valor da diagonal menor: ");
scanf ("%f", &diagonalmenor);

//processamento
area = (diagonalmaior*diagonalmenor)/2;

//saida
printf("A area é:%.2f", area);
    
    return 0;
}
