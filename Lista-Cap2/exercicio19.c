#include <stdio.h>

int main() {
    int dias_trabalhados;
    float salario_bruto, salario_liquido;

    printf("Insira o numero de dias trabalhados pelo encanador: ");
    scanf("%d", &dias_trabalhados);

    salario_bruto = dias_trabalhados * 30; //em reais
    salario_liquido = salario_bruto - (salario_bruto * 8/100);

    printf("O salario bruto equivale a %.2f e o salario liquido a ser pago equivale a %.2f\n\n", salario_bruto, salario_liquido);

    return 0;
}
