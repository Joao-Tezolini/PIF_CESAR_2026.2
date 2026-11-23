#include <stdio.h>

#define DEBUG

int somaAteN(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
#ifdef DEBUG
        printf("i = %d, soma parcial = %d\n", i, soma);
#endif
    }
    return soma;
}

int main() {
    int n;

    printf("Digite n: ");
    scanf("%d", &n);

    printf("Soma de 1 ate %d: %d\n", n, somaAteN(n));

    /*
     * Com #define DEBUG: o bloco #ifdef DEBUG e compilado, exibindo o valor
     * parcial da soma a cada iteracao do laco antes do resultado final.
     * Sem #define DEBUG: o bloco #ifdef DEBUG e ignorado na compilacao,
     * exibindo apenas o resultado final da soma.
     */

    return 0;
}
