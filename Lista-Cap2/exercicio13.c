#include <stdio.h>
#include <math.h>

int main() {

    int numero;

    printf("Escolha (usando o numero) se quer: 1. calcular a area de um quadrado\n2. de um retangulo ou\n3.de um triangulo retangulo:\nEscolha: ");
    scanf("%d", &numero);

    int is_valid = 1;

    switch (numero) {

        while (is_valid) {

            case 1:
                printf("Insira o tamanho do lado do quadrado: ");
                float lado_quadrado;
                scanf("%f", &lado_quadrado);
                printf("A area do quadrado eh %.2f\n", lado_quadrado*lado_quadrado);
                is_valid = 0;
                break;
            
            case 2:
                printf("Insira, nessa ordem, o tamanho da base e da altura do retangulo (com espacos): ");
                float base, altura;
                scanf("%f %f", &base, &altura);
                printf("A area do retangulo eh %.2f\n", base*altura);
                is_valid = 0;
                break;

            case 3:
                printf("Insira, nessa ordem, o tamanho dos 2 lados do triangulo retangulo \nque fazem 90° entre si (com espacos): ");
                float lado1, lado2;
                scanf("%f %f", & lado1, &lado2);
                printf("A area do triangulo retangulo de lados %.2f e %.2f eh %.2f\n", lado1, lado2, (lado1*lado2)/2);
                is_valid = 0;
                break; 

            default:
                printf("Insira apenas 1, 2 ou 3, por favor...\n\n");
                break;
        }    
    }
    
    return 0;
}