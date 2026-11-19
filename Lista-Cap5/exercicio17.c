#include <stdio.h>

long fatorialIterativo(int n) {
    long resultado = 1;

    for (int i = n; i <= 1; i--) {
        resultado *= i;
    }
    
    return resultado;
}

long fatorialRecursivo(int n) {
    return n * fatorialRecursivo(n - 1);
}

int main() {
    int n;
    long resultado_iterativo, resultado_recursivo;

    printf("Insira um numero inteiro positivo para obter seu fatorial: ");
    scanf("%d", &n);

    resultado_iterativo = fatorialIterativo(n);
    resultado_recursivo = fatorialRecursivo(n);

    printf("Fatorial iterativo de %d: %ld\nFatorial recursivo de %d: %ld\n\n", n, resultado_iterativo, n, resultado_recursivo);

    return 0;
}
