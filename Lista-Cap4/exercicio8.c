#include <stdio.h>

int main () {
    int ano;
    printf("Insira um numero inteiro positivo para verificar se eh um ano bissexto ou nao: ");
    scanf("%d", &ano);

    if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0) {
        printf("O ano %d pertence aos bissextos.\n\n", ano);
    }
    else {
        printf("O ano %d nao pertence aos bissextos.\n\n", ano);
    }
    
    return 0;
}