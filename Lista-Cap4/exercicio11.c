#include <stdio.h>

int main() {
    int n1, n2, n3;
    // todas as combinacoes sao: 3 2 1, 3 1 2, 2 3 1, 2 1 3, 1 3 2, 1 2 3
    printf("Insira valores para 3 numeros, serao organizados em ordem crescente.\nNumeros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    // sempre vamos usar como referencia o termo do meio, comparando ele com o primeiro e ultimo termo a ser impresso
    // forma de padronizar as condicionais

    if (n2 < n1 && n2 > n3) { // #1, n2 no meio, 3 2 1

        printf("%d %d %d\n\n", n3, n2, n1);
    }
    else if (n1 < n2 && n1 > n3) { // #2, n1 no meio, 3 1 2

        printf("%d %d %d\n\n", n3, n1, n2);

    }
    else if (n3 < n1 && n3 > n2) { // #3, n3 no meio, 2 3 1

        printf("%d %d %d\n\n", n2, n3, n1);

    }
    else if (n1 > n2 && n1 < n3) { // #4, n1 no meio, 2 1 3

        printf("%d %d %d\n\n", n2, n1, n3);

    }
    else if (n3 < n2 && n3 > n1) { // #5, n3 no meio, 1 3 2

        printf("%d %d %d\n\n", n1, n3, n2);

    }
    else if (n2 < n3 && n2 > n1) { // #6, n2 no meio, 1 2 3
 
        printf("%d %d %d\n\n", n1, n2, n3);

    }
    
    return 0;
}