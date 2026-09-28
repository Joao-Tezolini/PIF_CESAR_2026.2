#include <stdio.h>

int main() {
    int linhas; // numero de linhas do triangulo (matriz)
    int num = 1; // variavel para controlar os numeros impressos em si

    printf("Insira o numero de linhas do triangulo de Floyd: ");
    scanf("%d", &linhas);

    for (int i = 1; i <= linhas; i++) { // controla o numero de linhas impressas de 1 a 'linhas'

        for (int j = 1; j <= i; j++) { // controla os numeros impressos em cada linha (na linha 1 imprime 1 numero, na linha 2, 2 numeros, na linha 3, 3 numeros e assim por diante (j <= i))

            printf("%d", num); // imprime o numero
            printf(" "); // imprime o espaco entre os numeros da linha
            num++; // garante que o prox numero impresso seja seu sucessor
        }
        
        printf("\n"); // depois de imprimir n numeros na linha n, passa para a linha n+1 para imprimir n+1 numeros
        
    }
    
    return 0;
}
