#include <stdio.h>

int main() {
    int n;
    printf("Insira um numero para saber se eh par ou impar e positivo, negativo ou zero. ");
    scanf("%d", &n);

    if (n % 2 == 0) {

        if (n > 0) {
            printf("O numero eh par e positivo.\n\n");
        }
        else if (n == 0) {
            printf("O numero eh zero.\n\n");
        }
        else {
            printf("O numero eh par e negativo.\n\n");
        }        
    }
    else {

        if (n > 0) {
            printf("O numero eh impar e positivo.\n\n");
        }
        else {
            printf("O numero eh impar e negativo.\n\n");
        }
    }
    return 0;
}