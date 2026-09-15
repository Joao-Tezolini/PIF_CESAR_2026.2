#include <stdio.h>
#include <math.h>

int main() {
    float n;
    
    printf("Digite um número inteiro para receber seu quadrado e sua décima parte: ");
    printf("\n");

    scanf("%f", &n);

    int quadrado = pow(n, 2);
    float n10 = n/10;

    printf("O quadrado de %.0f é %d e a decima parte de %.0f eh %.2f\n\n", n, quadrado, n, n10);

    return 0;
}