#include <stdio.h>

// Precisamos ler:
// O comprimento e a largura do terreno em metros
// O preço unitário do metro de arame farpado (em reais)

int main() {
    float comprimento, largura; // assumindo que seja um terreno perfeitamente retangular
    float preco_metro_arame; // sao necessarias 3 camadas de fio para seguranca do perimetro

    printf("Insira, nessa ordem, o comprimento e a largura do perimetro (apenas valor numeral sem grandeza): ");
    scanf("%f %f", &comprimento, &largura);
    
    printf("\nAgora, insira o valor do preco do metro de arame (use apenas numeros): ");
    scanf("%f", &preco_metro_arame);

    float perimetro = 2*comprimento + 2*largura;
    float metros_de_arame = 3 * perimetro;
    float preco_final = metros_de_arame * preco_metro_arame;

    printf("Se o perimetro mede %.2fm, sao necessarios %.2fm de arame, que vai custar R$%.2f\n\n", perimetro, metros_de_arame, preco_final);

    return 0;
}
