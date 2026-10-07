#include <stdio.h>

int filtragem3e5(int n, int impressoes) {
    for (int i = 0; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            impressoes++;
        }

    }

    return impressoes;
}

int main() {
    int num; 
    int impressoes = 0;

    printf("Insira um numero para imprimir os multiplos de 3 e 5 simultaneamente, de 1 ate o numero escolhido: ");
    scanf("%d", &num);

    printf("\n");

    impressoes = filtragem3e5(num, impressoes);
    if (impressoes == 0) printf("O numero inserido nao possui numero menores que ele multiplos de 3 e 5 simultaneamente...\n");

    printf("\n");
    return 0;
}