#include <stdio.h>

int main() {
    int a = 0, b = 0, c = 0;
    double media = 0;
    
    printf("Indique as notas a, b e c para calcular a media: ");
    scanf("%d %d %d", &a, &b, &c);

    media = (a + b + c)/3;

    printf("A media das notas eh igual a: %.2f\n", media);

    return 0;
}