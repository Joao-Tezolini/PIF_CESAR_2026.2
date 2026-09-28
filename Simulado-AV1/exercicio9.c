#include <stdio.h>
#include <math.h>

float areaTrianguloHeron(float lado_a, float lado_b, float lado_c) {
    float area;
    float p = (lado_a + lado_b + lado_c)/2; // semiperímetro
    
    area = sqrt(p * (p - lado_a) * (p - lado_b) * (p - lado_c));
    
    return area;
}

int main() {
    float lado_a, lado_b, lado_c;
    char medida[2];

    printf("Insira, na ordem (ex: 15cm 10cm 20cm), o valor dos lados 'a', 'b' e 'c': ");
    scanf("%f%s %f%s %f%s", &lado_a, medida, &lado_b, medida, &lado_c, medida);

    float area = areaTrianguloHeron(lado_a, lado_b, lado_c);

    printf("A area do triangulo mede %.2f %s²\n\n", area, medida);
    
    return 0;
}