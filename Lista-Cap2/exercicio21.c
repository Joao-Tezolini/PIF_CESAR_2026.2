#include <stdio.h>

int main() {
    char caractere;
    
    printf("Insira um caractere para saber seu valor numerico na tabela ASCII: ");
    scanf("%c", &caractere);

    // nesse momento, a variavel 'caractere' possui uma letra na sua memoria
    // essa letra possui um valor numerico na tabela ASCII, onde todos os simbolos do teclado tambem sao designados um numero
    // ao tentar imprimir com o leitor %c, apenas a letra inserida sera impressa
    // entretando, ao imprimir com o leitor %d (reservado para numeros), 
    // o valor numeral da tabela ASCII reservado a essa letra sera impresso !

    printf("O valor ASCII do caractere %c eh: %d\n\n", caractere, caractere);

    return 0;
}