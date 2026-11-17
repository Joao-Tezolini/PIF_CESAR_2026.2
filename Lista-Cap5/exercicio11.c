#include <stdio.h>
#include <stdbool.h>

int ehPar(int n) {
    if (n % 2 == 0)
    {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int n;

    printf("Insira um numero para saber se eh par ou nao: ");
    scanf("%d", &n);

    bool isTrue = ehPar(n);
    if (isTrue) {
        printf("O numero %d eh par.\n\n", n);
    }
    else {
        printf("O numero %d nao eh par.\n\n", n);
    }

    return 0;
}