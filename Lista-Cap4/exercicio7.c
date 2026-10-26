#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Insira um numero maior ou igual a zero para obter sua raiz quadrada\nSe o numero for negativo, sera impresso seu quadrado.\nNumero: ");
    scanf("%d", &n);

    if (n >= 0)
    {
        n = sqrt(n);
        printf("Resultado: %d\n\n", n);
    }
    else {
        n = n*n;
        printf("Resultado: %d\n\n", n);
    }

    return 0;    
}