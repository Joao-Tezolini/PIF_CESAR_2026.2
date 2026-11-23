#include <stdio.h>
#include "areas.h"

int main() {
    float raio, baseRet, altRet, baseTri, altTri;

    printf("Raio do circulo: ");
    scanf("%f", &raio);

    printf("Base e altura do retangulo: ");
    scanf("%f %f", &baseRet, &altRet);

    printf("Base e altura do triangulo: ");
    scanf("%f %f", &baseTri, &altTri);

    printf("Area do circulo: %.2f\n", A_CIRC(raio));
    printf("Area do retangulo: %.2f\n", A_RET(baseRet, altRet));
    printf("Area do triangulo: %.2f\n", A_TRI(baseTri, altTri));

    return 0;
}
