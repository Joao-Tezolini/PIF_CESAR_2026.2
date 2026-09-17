#include <stdio.h>
#include <math.h>

int main() {
    float pi = 3.141593;
    float raio;
    float area, circunferencia;

    printf("Insira o valor do raio para calcular sua circunferencia e a area dela: ");
    scanf("%f", &raio);

    area = pi * pow(raio, 2);
    circunferencia = 2 * pi * raio;

    printf("Tendo um raio de valor %.2f, sua circunferencia mede %.2f e a area dela mede %.2f\n\n", raio, circunferencia, area);

    return 0;
}