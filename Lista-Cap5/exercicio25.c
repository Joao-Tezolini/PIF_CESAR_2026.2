#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdc(b, a % b);
}

void simplifica(int num, int den) {
    int d = mdc(num, den);
    printf("Fracao simplificada: %d/%d\n", num / d, den / d);
}

int main() {
    int a, b;

    printf("Digite dois inteiros positivos: ");
    scanf("%d %d", &a, &b);

    printf("MDC: %d\n", mdc(a, b));
    simplifica(a, b);

    return 0;
}
