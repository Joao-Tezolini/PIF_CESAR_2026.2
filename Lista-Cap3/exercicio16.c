#include <stdio.h>

int main() {
    int senha_secreta = 2026;
    int erro_count = 0;
    int tentativa;

    do
    {
        printf("Insira a senha de 4 digitos: ");
        scanf("%d", &tentativa);

        if (tentativa == senha_secreta) {
            printf("Acesso Concedido!\n\n");
            return 0;
        } 
        else {
            erro_count++;
        }
        
        
    } while (erro_count != 3);
    
    printf("Conta Bloqueada por Seguranca!\n\n");

    return 0;
}