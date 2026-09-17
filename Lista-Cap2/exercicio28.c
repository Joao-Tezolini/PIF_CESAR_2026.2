#include <stdio.h>

int main() {
    float normais, extras, bruto, imposto;

    scanf("%lf %lf", &normais, &extras);

    bruto = (normais * 10.0) + (extras * 15.0);
    imposto = (bruto > 12000.0) ? (bruto - 12000.0) * 0.10 : 0.0; // salario bruto é maior que 12mil? se sim, (bruto - 12mil)*0.1 :se nao, nao paga imposto

    printf("Bruto: R$ %.2f\n", bruto);
    printf("Imposto: R$ %.2f\n", imposto);

    return 0;
}
