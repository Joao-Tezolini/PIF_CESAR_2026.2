#include <stdio.h>

#define DOBRO(x) x*2

int dobro(int x) {
    return x * 2;
}

int main() {
    printf("Macro DOBRO(2+3): %d\n", DOBRO(2+3));
    printf("Funcao dobro(2+3): %d\n", dobro(2+3));

    /*
     * Os resultados diferem porque a macro faz substituicao textual direta:
     * DOBRO(2+3) vira 2+3*2 = 2+6 = 8, pela precedencia da multiplicacao.
     * Ja a funcao avalia o argumento 2+3 (= 5) antes da chamada, retornando 5*2 = 10.
     */

#undef DOBRO
#define DOBRO(x) ((x) * 2)

    printf("Macro corrigida DOBRO(2+3): %d\n", DOBRO(2+3));

    return 0;
}
