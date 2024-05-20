#include <stdio.h>

int main() {
    int dia, mes;

    printf("Digite o dia do seu nascimento: ");
    scanf("%d", &dia);

    printf("Digite o mês do seu nascimento:"
    "\n 1-Janeiro"
    "\n 2-Fevereiro"
    "\n 3-Março"
    "\n 4-Abril"
    "\n 5-Maio"
    "\n 6-Junho"
    "\n 7-Julho"
    "\n 8-Agosto"
    "\n 9-Setembro"
    "\n 10-Outubro"
    "\n 11-Novembro"
    "\n 12-Dezembro"
    "\n"
    );
    scanf("%d", &mes);

    switch (mes) {
        
        case 1: // Janeiro
            if (dia >= 20) {
                printf("Aquário\n");
            } else {
                printf("Capricórnio\n");
            }
            break;
            
        case 2: // Fevereiro
            if (dia >= 19) {
                printf("Peixes\n");
            } else {
                printf("Aquário\n");
            }
            break;
            
        case 3: // Março
            if (dia >= 21) {
                printf("Áries\n");
            } else {
                printf("Peixes\n");
            }
            break;
            
        case 4: // Abril
            if (dia >= 21) {
                printf("Touro\n");
            } else {
                printf("Áries\n");
            }
            break;     
            
        case 5: // Maio
            if (dia >= 21) {
                printf("Gêmeos\n");
            } else {
                printf("Touro\n");
            }
            break;
            
        case 6: // Junho
            if (dia >= 21) {
                printf("Cancêr\n");
            } else {
                printf("Gêmeos\n");
            }
            break;            
           
        case 7: // Julho
            if (dia >= 22) {
                printf("Leão\n");
            } else {
                printf("Cancêr\n");
            }
            break;
            
        case 8: // Agosto
            if (dia >= 23) {
                printf("Virgem\n");
            } else {
                printf("Leão\n");
            }
            break;
            
        case 9: // Setembro
            if (dia >= 23) {
                printf("Libra\n");
            } else {
                printf("Virgem\n");
            }
            break;
            
        case 10: // Outubro
            if (dia >= 23) {
                printf("Escorpião\n");
            } else {
                printf("Libra\n");
            }
            break;     
            
            
        case 11: // Novembro
            if (dia >= 22) {
                printf("Sagitário\n");
            } else {
                printf("Escorpião\n");
            }
            break;
            
            
        case 12: // Dezembro
            if (dia >= 22) {
                printf("Capricórnio\n");
            } else {
                printf("Sagitário\n");
            }
            break;             
        default:
            printf("Data inválida.\n");
    }

    return 0;
}
