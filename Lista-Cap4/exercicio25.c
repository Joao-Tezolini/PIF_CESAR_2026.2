#include <stdio.h>

int main() {
    int total, pago;

    printf("Insira o valor total a pagar: ");
    scanf("%d", &total);

    printf("Insira o valor entregue pelo cliente: ");
    scanf("%d", &pago);

    if (pago < total) {
        printf("Erro: O valor entregue eh insuficiente.\n\n");
    } 
    else {
        int troco = pago - total;
        printf("Troco devido: R$ %d\n\n", troco);

        if (troco == 0) {
            printf("Nao ha troco a ser devolvido.\n\n");
        } 
        else {
            int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0;

            if (troco >= 100) {
                n100 = troco / 100;
                troco = troco % 100;
            }

            if (troco >= 50) {
                n50 = troco / 50;
                troco = troco % 50;
            }

            if (troco >= 20) {
                n20 = troco / 20;
                troco = troco % 20;
            }

            if (troco >= 10) {
                n10 = troco / 10;
                troco = troco % 10;
            }

            if (troco >= 5) {
                n5 = troco / 5;
                troco = troco % 5;
            }

            if (troco >= 2) {
                n2 = troco / 2;
                troco = troco % 2;
            }

            printf("Decomposicao do troco em cedulas:\n");
            printf("Cedulas de R$ 100: %d\n", n100);
            printf("Cedulas de R$ 50: %d\n", n50);
            printf("Cedulas de R$ 20: %d\n", n20);
            printf("Cedulas de R$ 10: %d\n", n10);
            printf("Cedulas de R$ 5: %d\n", n5);
            printf("Cedulas de R$ 2: %d\n", n2);

            if (troco > 0) {
                printf("Restante (moeda de R$ 1): %d\n", troco);
            }
            printf("\n");
        }
    }

    return 0;
}
