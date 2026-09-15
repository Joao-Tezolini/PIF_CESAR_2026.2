#include <stdio.h>

int main() {
    float temp;

    printf("Insira a temperatura que sera convertida para Fahrenheit e Kelvin: ");
    printf("\n");
    scanf("%f", &temp);

    float ftemp = (temp * 9/5) + 32;
    float ktemp = temp + 273.15;

    printf("A temperatura %.2f°C = %.2f°F e %.2fK\n\n", temp, ftemp, ktemp);

    return 0;
}