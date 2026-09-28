#include <stdio.h>

long long int fatorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }

    return n * fatorial(n - 1);
}

int main() {
    int n;
    printf("Insira um numero para obter seu fatorial...\n");
    scanf("%d", &n);

    long long int fat;

    fat = fatorial(n);

    printf("O fatorial de %d resulta em %lld\n\n", n, fat);

    return 0;
}