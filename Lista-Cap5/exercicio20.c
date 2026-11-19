#include <stdio.h>

int ehPrimo(int n) {
    int soma;

    for (int i = 1; i <= n; i++) {

        if (n % i == 0) {
            soma++;
        }   
    }

    if (soma == 2) {
        return 1;
    }
    else {
        return 0;
    }
    
}

int main() {
    int n;

    printf("Insira um numero para verificar se ele eh primo: ");
    scanf("%d", &n);

    int resultado = ehPrimo(n);

    if (resultado == 1)
    {
        printf("O numero %d eh primo.\n\n", n);
    }
    else {
        printf("O numero %d nao eh primo.\n\n", n);
    }
    
    return 0;
}