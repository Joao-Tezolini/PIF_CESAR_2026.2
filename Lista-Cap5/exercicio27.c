#include <stdio.h>

float celsiusParaFahrenheit(float c) {
    return c * 9.0f / 5.0f + 32.0f;
}

float celsiusParaKelvin(float c) {
    return c + 273.15f;
}

float fahrenheitParaCelsius(float f) {
    return (f - 32.0f) * 5.0f / 9.0f;
}

float kelvinParaCelsius(float k) {
    return k - 273.15f;
}

int main() {
    int opcao;
    float temp;

    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    printf("Temperatura: ");
    scanf("%f", &temp);

    switch (opcao) {
        case 1:
            printf("Resultado: %.2f\n", celsiusParaFahrenheit(temp));
            break;
        case 2:
            printf("Resultado: %.2f\n", celsiusParaKelvin(temp));
            break;
        case 3:
            printf("Resultado: %.2f\n", fahrenheitParaCelsius(temp));
            break;
        case 4:
            printf("Resultado: %.2f\n", kelvinParaCelsius(temp));
            break;
        default:
            printf("Opcao invalida.\n");
            break;
    }

    return 0;
}
