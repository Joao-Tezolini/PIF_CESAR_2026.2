#include <stdio.h>

int main() {
    int a, b, c;

    // verifica condição de existência
    if (a < b + c && b < a + c && c < a + b) {

        if (a == b && a == c) {
            printf("Equilatero.\n\n"); 
        }

        else if (a == b && a != c || a == c && a != b || b == c && b != a) {
            printf("Isosceles.\n\n");
        }
        
        else if (a != b && a != c && b != c) {
            printf("Escaleno.\n\n");
        }
        
        return 0;
    }
    
}