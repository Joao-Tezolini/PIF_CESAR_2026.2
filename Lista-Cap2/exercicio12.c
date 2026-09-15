#include <stdio.h>

int main() {
    int n;

    printf("Insira um numero para receber seu antecessor e sucessor: ");
    scanf("%d", &n);

    printf("\n");

    printf("O antecessor de %d ", n);
    printf("eh %d ", --n);
    n++;
    printf("e o sucessor eh %d\n", ++n);


    return 0;
}