#include <stdio.h>
#define PI 3.1415

float area(float r) {
    return 4*PI*r*r;
}

int main() {
    float r;

    printf("Insira o raio da esfera para ter a sua area: ");
    scanf("%f", &r);

    float a = area(r);

    printf("Medida da area da esfera de raio %.2f: %.2f\n\n", r, a);

    return 0;
}