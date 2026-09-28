#include <stdio.h>

int main() {
    int tentativas_restantes = 3;
    
    while (tentativas_restantes > 0) {

        int senha = 2026;
        int tentativa;
        printf("Insira a senha numerica secreta: ");
        scanf("%d", &tentativa);

        if (tentativa == senha) {
            printf("Parabens! Senha correta! \nFinalizando o programa...\n\n");
            break;
        }

        else {
            tentativas_restantes--;

            if (tentativas_restantes > 0) {
                printf("Senha incorreta... Tente novamente mais %d vezes.\n", tentativas_restantes);
            }
            else {
                printf("Suas tentativas acabaram... Conta Bloqueada por Seguranca!\n\n");
            }
            
        }
    }
    
    return 0;
}