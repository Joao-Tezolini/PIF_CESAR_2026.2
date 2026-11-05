#include <stdio.h>
#include <math.h>

int calculaDelta(int a, int b, int c) {
    int d = (pow(b, 2) - 4*a*c);
    return d;
}

int raizDelta(int d) {
    return sqrt(d);
}

int main() {
    int a, b, c;

    printf("Para obter as raizes da equacao de segundo grau, insira os coeficientes a, b e c de ax² + bx + c: ");
    scanf("%d %d %d", &a, &b, &c); 

    int delta = calculaDelta(a, b, c);

    if (delta < 0) {
        printf("Nao existem raizes reais.\n\n");
    }

    else if (delta == 0) {
        int x = (b*(-1)/2*a);
        printf("Existe uma unica raiz real: %.2f\n\n", x);
    }

    else if (delta > 0) {
        int raiz_delta = raizDelta(delta);
        float x1 = (b*(-1) + raiz_delta)/2*a;
        float x2 = (b*(-1) - raiz_delta)/2*a;
        printf("Existem duas raizes reais: %.2f e %.2f\n\n", x1, x2);
    }   

    return 0;
}