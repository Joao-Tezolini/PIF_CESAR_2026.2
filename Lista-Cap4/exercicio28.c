#include <stdio.h>

int main() {
    int opcao;

    printf("=== Sistema de Atendimento Automatico Bancario (URA) ===\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferencia\n");
    printf("4 - Falar com Atendente\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nDirecionando para a Consulta de Saldo...\n");
            break;
        case 2:
            printf("\nDirecionando para a Emissao de Extrato...\n");
            break;
        case 3:
            printf("\nDirecionando para Transferencia...\n");
            break;
        case 4:
            printf("\nTransferindo para um de nossos atendentes...\n");
            break;
        default:
            printf("\nOpcao invalida! Por favor, escolha uma opcao valida (1 a 4).\n");
            break;
    }

    return 0;
}
