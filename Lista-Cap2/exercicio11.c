#include <stdio.h>

int main() {
    float pi = 3.141593;
    float angulo;

    printf("Insira o valor de um angulo que sera convertido de graus para radianos: ");
    scanf("%f", &angulo);

    angulo = angulo * (pi / 180.0);

    printf("O valor do angulo de graus para radianos eh: %.4f\n", angulo);

    return 0;
}