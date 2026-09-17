#include <stdio.h>

int main() {
    char caractere;

    printf("O programa vai converter uma letra maiuscula em minuscula...\n");
    printf("Insira a letra a ser convertida: ");
    scanf("%c", &caractere);

    // para o caso de o usuario nao escrever uma letra maiuscula do alfabeto
    if(caractere < 65 || caractere > 90) {
        printf("Escreva uma letra maiuscula valida... Tente novamente.\n");
        return 0;
    }

    caractere += 32;

    printf("Aqui esta o seu caractere convertido: %c\n\n", caractere);
}