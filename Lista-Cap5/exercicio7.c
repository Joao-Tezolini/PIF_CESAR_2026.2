#include <stdio.h>

int somaAeB(int a, int b) {
    return a + b;
}

int main() {
    int a, b;

    printf("Insira os valores A e B a serem somados: ");
    scanf("%d %d", &a, &b);

    int soma = somaAeB(a, b);

    printf("Soma de %d e %d = %d\n\n", a, b, soma);

    return 0;
}
