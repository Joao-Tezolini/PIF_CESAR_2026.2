#include <stdio.h>

long potencia(int base, int expoente) {
    
    long resultado;

    if (expoente == 1) 
    {
        return base;
    }
    else if (expoente == 0)
    {
        return 1;
    }
    else {
        resultado = base;
        for (int i = 0; i < expoente - 1; i++) {
            resultado *= base;
        }   
        return resultado;
    }
}

// o caso base é composto de dois casos: quando o expoente for 0 ou 1
// para o expoente 0, sempre será retornado 1, pois todo e qualquer número elevado a 0 resulta em 1.
// para o expoente igual a 1, sempre será retornado o valor da base, pois todo e qualquer número elebado a 1 resulta nele mesmo.

int main() {
    int base, expoente;

    printf("Insira um numero para servir de base e outro para ser o expoente da potencia: ");
    scanf("%d %d", &base, &expoente);

    int resultado = potencia(base, expoente);

    printf("O resultado de elevar %d a %d: %d\n\n", base, expoente, resultado);

    return 0;
}