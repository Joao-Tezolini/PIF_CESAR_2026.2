#include <stdio.h>

float calculoSalario(int dias) {
    float salario;
    salario = dias * 45;

    float gratificacao = salario * 0.05;
    float imposto = salario * 0.08;

    salario = salario + gratificacao - imposto;

    return salario;
}

int main() {

    int dias_trabalhados;
    float salario;

    printf("Insira quantos dias foram trabalhados: ");
    scanf("%d", &dias_trabalhados);

    salario = calculoSalario(dias_trabalhados);

    printf("O salario do funcionario esse mes eh um total de: R$%.2f\n\n", salario);

    return 0;
}