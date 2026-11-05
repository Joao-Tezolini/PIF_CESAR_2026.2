#include <stdio.h>

int main() {
    int horas;
    float total = 0.0;

    printf("Insira o numero de horas de permanencia do veiculo: ");
    scanf("%d", &horas);

    if (horas < 0) {
        printf("Tempo invalido!\n");
        return 1;
    }

    if (horas <= 2) {
        total = horas * 2.0;
    } else if (horas <= 4) {
        total = (2 * 2.0) + (horas - 2) * 2.5;
    } else {
        total = (2 * 2.0) + (2 * 2.5) + (horas - 4) * 3.0;
    }

    printf("\nTempo total: %d hora(s)\n", horas);
    printf("Valor final cobrado: R$ %.2f\n", total);

    return 0;
}
