#include <stdio.h>

int main() {
    float lab, av, final;
    float media;

    printf("Vamos ler as notas Trabalho de Laboratorio (peso 2), Avaliacao Semestral (peso 3) e Exame Final (peso 5): ");
    scanf("%f %f %f", &lab, &av, &final);

    media = ((2*lab) + (3*av) + (5*final))/10;
    if (media <= 2.9) {
        printf("Media = %.2f. Reprovado.\n\n", media);
    }
    else if (media > 2.9 && media <=4.9) {
        printf("Media = %.2f. Recuperacao.\n\n", media);
    }
    else if (media >= 5) {
        printf("Media = %.2f. Aprovado.\n\n", media);
    }
    
    return 0;
}
