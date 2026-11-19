#include <stdio.h>

void contagem(int n) {
    if (n == 1) {
        printf("%d\n", n);
        printf("Fogo!");
    }
    else {
        printf("%d\n", n);
        return contagem(n - 1);
    }
}

void contagemV2(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\n", i);

        if (i == n)
        {
            printf("Fogo!");
        }
        
    }
    
}

int main() {
    int n;

    printf("Insira um valor para fazer uma contagem regressiva e uma contagem progressiva: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O numero nao eh valido. Tente novamente...");
        return 0;
    }

    contagem(n);
    printf("\n");
    printf("\n");
    contagemV2(n);

    return 0;
    
}