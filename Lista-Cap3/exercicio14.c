#include <stdio.h>

int main() {
    int soma = 0;
    for (int i = 1; i <= 100; i++)
    {
        printf("%d -> %d\n", i, i*i);
        soma += i*i;
    }
    
    printf("\nA soma dos quadrados de 1 a 100 totaliza: %d\n\n", soma);

    return 0;
}