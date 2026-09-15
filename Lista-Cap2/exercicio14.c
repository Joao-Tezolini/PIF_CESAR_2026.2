#include <stdio.h>
#include <math.h>

int main() {
    printf("Insira os valores dos 3 lados do triangulo para calcular sua area atraves da formula de Heron: ");
    int lado1, lado2, lado3;
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    float semip = (lado1 + lado2 + lado3)/2.0;
    float area = sqrt(semip * (semip - lado1) * (semip - lado2) * (semip - lado3));

    printf("A area do triangulo eh %.2f\n", area);

    return 0;
}
