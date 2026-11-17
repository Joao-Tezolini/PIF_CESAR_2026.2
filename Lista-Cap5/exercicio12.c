#include <stdio.h>

void exibeMenu(void) { 
    printf("1 - Cadastrar");
    printf("2 - Listar");
    printf("3 - Remover");
    printf("0 - Sair");
}

int main() {
    exibeMenu();

    int op;

    printf("Escolha a opcao desejada para prosseguir: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Opcao de cadastramento.\n\n");
        break;
    
    case 2:
        printf("Opcao de listar.\n\n");

    case 3:
        printf("Opcao de remocao.\n\n");

    case 0:
        printf("Opcao de sair.\n\n");
    default:
        printf("Insira uma opcao valida...\n\n");
        break;
    }

    return 0;
}