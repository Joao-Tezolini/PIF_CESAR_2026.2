# exercicio 6 lista de revisao

a) A variável 'soma' foi declarada dentro do 'for loop'. Como o 'printf' está fora do loop, o programa não reconhecerá a variável, já que o loop é considerado um escopo local e não global.
b) Como existe um 'break' no momento que i atingir valor 8, as iterações são feitas de 1 a 8, sendo i = 8 o momento de parada. O loop roda por inteiro para os valores de 1 a 4; ao atingir 5, o comando 'continue' pula o resto do loop direto para o 'i++' e puxa a próxima iteração; finalmente, para o comando 'break', o loop é interrompido por completo e finalizado, seguindo normalmente com o resto do código que vem após o loop.
c) 

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0; // fora do for loop, a variável tem alcance global, não mais local
    
    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    }
    
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}

resultado impresso no console:
Soma final = 115