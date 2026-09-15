#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite dois numeros inteiros (use espaco entre eles) \npara realizar as quatro operacoes basicas entre eles em ordem: ");
    scanf("%d %d", &n1, &n2);

    int soma = n1 + n2;
    int sub = n1 - n2;
    int mult = n1 * n2;

    if(n2 == 0) {
        printf("Impossivel realizar a divisao, prosseguindo com as outras operacoes...\n\n");

        printf("As operacoes basicas (menos a divisao) entre os numeros %d e %d resultam em:\n", n1, n2);
        printf("Soma: %d", soma);
        printf("Subtracao: %d", sub);
        printf("Multiplicacao: %d", mult);
    }
    else {
        int div = n1 / n2;

        printf("As operacoes basicas entre os numeros %d e %d resultam em:\n", n1, n2);
        printf("Soma: %d\n", soma);
        printf("Subtracao: %d\n", sub);
        printf("Multiplicacao: %d\n", mult);
        printf("Divisao: %d\n\n", div);
    }

    return 0;
}