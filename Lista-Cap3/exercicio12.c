#include <stdio.h>

int main() {
    float celsius, fahrenheit, kelvin;

    printf("+----------+------------+------------+\n");
    printf("| Celsius  | Fahrenheit |   Kelvin   |\n");
    printf("+----------+------------+------------+\n");

    for(celsius = 0; celsius <= 100; celsius += 5) {
        fahrenheit = (9.0 * celsius) / 5.0 + 32.0;
        kelvin = celsius + 273.15;

        printf("| %7.2f  | %9.2f  | %9.2f  |\n", celsius, fahrenheit, kelvin);
    }

    printf("+----------+------------+------------+\n");

    return 0;
}

// busquei essa formatacao com IA mas fiz todo o pensamento logico