#include <stdio.h>

int main() {
    float nota;

    do {
        printf("Insira uma nota entre 0.0 e 10.0: ");
        scanf("%f", &nota);
    } while (nota < 0.0 || nota > 10.0);
    
    printf("Obrigado pela nota!\n\n");
    
    return 0;
}