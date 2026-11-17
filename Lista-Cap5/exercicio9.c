#include <stdio.h>

int maior(int a, int b) {
    if (a > b)
    {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    int a, b;

    printf("Digite valores para 'a' e 'b' e receba o maior valor de volta: ");
    scanf("%d %d", &a, &b);

    int m = maior(a, b);

    printf("O maior numero entre '%d' e '%d': %d\n\n", a, b, m);

    return 0;
}