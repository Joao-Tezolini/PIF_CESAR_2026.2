#include <stdio.h>

int main () {
    int a, b;

    printf("Serao impressos valores entre A e B, respectivamemente\nPara A maior que B, ordem decrescente\nPara B maior que A, ordem crescente\n\nInsira um valor para A e um para B:");
    scanf("%d %d", &a, &b);

    if (a > b) {
        for (int i = a; a >= b; i--) {
        
            printf("%d ", a);
            a--;
        }
        
    }
    else {
        for (int i = a; a <= b; i++) {
            
            printf("%d ", a);
            a++;
        }
        
    }
    printf("\n");

    return 0;
}
