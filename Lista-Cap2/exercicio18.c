#include <stdio.h>
#include <math.h>

int main() {
    float pi = 3.141593;
    float raio;
    float area, volume;

    printf("Insira o valor que corresponde ao raio da circunferencia e da esfera: ");
    scanf("%f", &raio);

    area = 4 * pi * pow(raio, 2);
    volume = (4/3) * pi * pow(raio, 3);

    printf("A area da circunferencia eh: %.2fcm²\nO volume da esfera eh: %.2fcm³", area, volume);

    return 0;
}