#include <stdio.h>

int main() {
    float salario_base, salario_liquido;

    printf("Insira (usando o formato XXXX.XX) o valor correspondente ao salario base do funcionario: ");
    scanf("%f", &salario_base);

    // vamos calcular primeiro, o salario liquido sem a gratificacao
    salario_liquido = salario_base - (salario_base * 7/100);
    
    // agora, vamos somar a bonificacao
    salario_liquido = salario_liquido + (salario_base * 5/100);

    // agora, imprimimos o salario liquido com a bonificacao

    printf("O salario liquido com a bonificacao adicionada equivale a: R$%.2f\n\n", salario_liquido);

    return 0;
}
