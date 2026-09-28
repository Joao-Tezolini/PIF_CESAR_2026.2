#include <stdio.h>
#include <math.h>

float areaEsfera(float raio) {
    float pi = 3.14159265;
    float area = 4 * pi * pow(raio, 2);    
    
    return area;
}

float volumeEsfera(float raio) {
    float pi = 3.14159265;
    float volume = (4/3) * pi * pow(raio, 3);

    return volume;
}

int main() {
    float raio;
    char medida[2];

    printf("Insira o valor, em unidades de comprimento, do raio da esfera(ex: 15 cm): ");
    scanf("%f %s", &raio, medida);

    float area = areaEsfera(raio);
    float volume = volumeEsfera(raio);

    printf("A area da esfera: %.2f %s²\nO volume da esfera: %.2f %s³\n\n", area, medida, volume, medida);

    return 0;
}