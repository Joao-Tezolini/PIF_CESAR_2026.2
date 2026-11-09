#include <stdio.h>

int main() {
    int alfa, beta, gama;
    printf("Insira os 3 angulos internos do triangulo: ");
    scanf("%d %d %d", &alfa, &beta, &gama);

    if (alfa + beta + gama == 180)
    {
        if (alfa == 90 || beta == 90 || gama == 90)
        {
            printf("Triangulo retangulo.\n\n");
        }
        else if (alfa > 90 || beta > 90 || gama > 90)
        {
            printf("Triangulo obtusangulo.\n\n");
        }
        else if (alfa < 90 && beta < 90 && gama < 90)
        {
            printf("Triangulo acutangulo");
        }        
    }

    return 0;    
}