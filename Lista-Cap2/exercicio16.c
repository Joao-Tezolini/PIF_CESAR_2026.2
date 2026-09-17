#include <stdio.h>

int main() {
    float degrau_altura; // cm
    float altura_total_escada; // m
    int num_degraus; // int

    printf("Insira (use espaco para separar), a altura do degrau em cm e a altura da escada em metros: ");

    scanf("%f", &degrau_altura);
    scanf("%f", &altura_total_escada);

    num_degraus = altura_total_escada*100/degrau_altura;


    printf("\n\nO numero minimo de degraus necessarios eh: %d\n\n", num_degraus);

    return 0;
}  