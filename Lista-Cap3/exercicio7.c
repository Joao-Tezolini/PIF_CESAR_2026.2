#include <stdio.h>

int funcFor(int n) {
    for(int i = 1; i <= 100; i++) {
        printf("%d ", n);
        n++;
    }

    return 0;
}

int funcWhile(int n) {
    while(n != 101) {
        printf("%d ", n);
        n++;
    }
}

int funcDoWhile(int n) {

    do {
        printf("%d ", n);
        n++;
    } while(n != 101);
}

int main() {
    int n = 1;

    funcFor(n);
    printf("\n\n");

    funcWhile(n);
    printf("\n\n");

    funcDoWhile(n);
    printf("\n\n");

    return 0;
}