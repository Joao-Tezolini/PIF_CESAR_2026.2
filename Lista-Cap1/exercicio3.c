/* Esse programa mostra o uso de comentários em várias linhas
* e mostra também o uso de comentários em uma única linha
*
* Primeiro programa
***************************************************************/
/* Prog1.C */

#include <stdio.h> /* Para printf() e scanf() */
#include <math.h> /* Para pow() */

int main() { /* Função main */  /* início do corpo da função main */
    int base = 0; /* declaração da variável que servirá como base da nossa potência */
    int expoente = 0; /* declaração da variável que servirá como expoente da nossa potência */

    printf("Insira a base da potencia: "); /* Chamada à função printf */
    scanf("%d", &base); /* Chamada à função scanf */

    printf("\n"); /*pulo de linha para ficar esteticamente agradável*/

    printf("Insira o expoente da potencia: "); /* Chamada à função printf */
    scanf("%d", &expoente); /* Chamada à função scanf */

    printf("\n"); /*pulo de linha para ficar esteticamente agradável*/

    /* criando a variavel potencia 
    e atribuindo a ela o resultado 
    da operação matemática da potenciação */
    int potencia = pow(base, expoente); 

    printf("O resultado da potencia de %d elevado a %d é: %d.\n", base, expoente, potencia);
    return 0;
}/* Fim do corpo da função main */