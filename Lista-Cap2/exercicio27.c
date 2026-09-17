#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // garante que a semente geradora dos numeros aleatorios seja sempre resetada com base no relogio interno da maquina
    srand(time(NULL));
    for (int i = 1; i <= 3; i++) {
        // rand() % 6 resulta em valores de 0 a 5. 
        // Somando 1, deslocamos o intervalo para 1 a 6.
        int dado = (rand() % 6) + 1;
            
        printf("Dado %d: %d\n", i, dado);
    }

    return 0;
}
