#include <stdio.h>

int main() {
    int dia, mes, ano;
    
    printf("Por favor, digite sua data de nascimento no formato dd/mm/aaaa Digite com espacos.\n");
    
    scanf("%d %d %d", &dia, &mes, &ano);
    printf("\n\n");

    printf("Sua data de nascimento é: %d/%d/%d\n\n", ano, mes, dia);

    return 0;
}