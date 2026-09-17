#include <stdio.h>

int main() {
    float kmh, ms;

    printf("Insira a velocidade em Km/h para ser convertida para m/s: ");
    scanf("%f", &kmh);

    ms = kmh / 3.6;

    printf("%.2fKm/h equivalem a %.2fm/s.\n\n", kmh, ms);

    return 0;
}