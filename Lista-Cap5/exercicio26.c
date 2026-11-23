#include <stdio.h>

long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%ld ", fibonacci(i));
    }
    printf("\n");

    /*
     * A versao recursiva se torna lenta para valores grandes de n porque
     * recalcula os mesmos subproblemas varias vezes, fazendo o numero de
     * chamadas crescer exponencialmente (O(2^n)).
     */

    return 0;
}
