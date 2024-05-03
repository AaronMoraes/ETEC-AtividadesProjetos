// Online C compiler to run C program online
#include <stdio.h>

int main() {
//Ler um número e mostrar o seu dobro e seu triplo. Apresente na tela. 
int numero, dobro, triplo;

printf ("Informe o número: ");
scanf ("%d", &numero);

dobro = (numero*2);
triplo = (numero*3);

printf("O dobro desse número é:%d, \n", dobro);
printf ("O triplo desse número é: %d", triplo);

    
    return 0;
}
