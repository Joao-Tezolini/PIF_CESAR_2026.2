#include <stdio.h>

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        return valor * 0.9f;
    }
    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}

int main() {
    float preco, pago, subtotal, total, troco;
    int quantidade, opcaoPagamento;

    printf("Preco unitario: ");
    scanf("%f", &preco);

    printf("Quantidade: ");
    scanf("%d", &quantidade);

    printf("Forma de pagamento (1 - A vista, 2 - A prazo): ");
    scanf("%d", &opcaoPagamento);

    printf("Valor pago: ");
    scanf("%f", &pago);

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, opcaoPagamento);
    troco = calculaTroco(total, pago);

    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);
    printf("Troco: R$ %.2f\n", troco);

    return 0;
}
