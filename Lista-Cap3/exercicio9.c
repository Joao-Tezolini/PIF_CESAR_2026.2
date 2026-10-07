#include <stdio.h>

int main() {
    float num = 0;
    float soma = 0;
    int qtd = 0;

    do {

        printf("Insira um valor: ");
        scanf("%f", &num);  

        if (num > 0) {
            soma += num;
            qtd++;
        }            
        
    } while (num > 0);
    
    printf("Soma: %.2f\n", soma);
    printf("Quantidade de numeros inseridos: %d\n\n", qtd);
    
    return 0;
}