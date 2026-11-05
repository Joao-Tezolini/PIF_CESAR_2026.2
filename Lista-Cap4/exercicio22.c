#include <stdio.h>

int main() {
    float valor_prod;
    int cod; // 1 - MG, 2 - SP, 3 - RJ, 4 - MS

    printf("Insira o valor do produto e o codigo regional 1 - MG, 2 - SP, 3 - RJ, 4 - MS: ");
    scanf("%f %d", &valor_prod, &cod);

    switch (cod)
    {
    case 1: // MG - 7% de taxa
        valor_prod += (7/100)*valor_prod;
        printf("Estado de MG.\nValor final do produto: R$%.2f\n\n", valor_prod);
        break;
    case 2: // SP - 12% de taxa
        valor_prod += (12/100)*valor_prod;
        printf("Estado de SP.\nValor final do produto: R$%.2f\n\n", valor_prod);
        break;
    case 3: // RJ - 15% de taxa
        valor_prod += (15/100)*valor_prod;
        printf("Estado do RJ.\nValor final do produto: R$%.2f\n\n", valor_prod);
        break;
    case 4: // MS - 8% de taxa
        valor_prod += (8/100)*valor_prod;
        printf("Estado do MS.\nValor final do produto: R$%.2f\n\n", valor_prod);
        break;
        
    default:
        printf("Insira um codigo regional valido...\n");
        break;
    }
}