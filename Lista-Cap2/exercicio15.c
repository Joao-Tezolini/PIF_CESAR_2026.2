#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4;

    printf("Insira as notas 1, 2, 3 e 4 com espacos entre elas: ");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    float media_simples = (nota1 + nota2 + nota3 +nota4)/4;
    float media_pond = (nota1 + nota2 + nota3*2 + nota4*2)/6;

    printf("A media simples das notas: %.2f, %.2f, %.2f, %.2f eh: %2.f\nE a media ponderada eh: %.2f\n\n", nota1, nota2, nota3, nota4, media_simples, media_pond);

    return 0;
}