#include <stdio.h>

float celsius(float fahr) {
    return (fahr - 32) * 5 / 9;
}

int main() {
    float c;
    float fahr;

    c = celsius(fahr);

    printf("A temperatura foi convertida de %.2f°F para %.2f°C\n\n", fahr, c);

    return 0;
}
