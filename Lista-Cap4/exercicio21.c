#include <stdio.h>

int main() {
    float s_atual;
    int cod_cargo; // 1 - Tecnico, 2 - Gerente, 3 - Demais cargos

    printf("Insira o valor atual do salario e o codigo do cargo: ");
    scanf("%f %d", &s_atual, &cod_cargo);

    float aux = s_atual; // salva o valor inicial do salario inserido

    switch (cod_cargo)
    {
    case 1:
        if (s_atual <= 3000) {
            s_atual += (15/100)*s_atual;        
        }        
        else {
            s_atual += (10/100)*s_atual;
        }

        break;
    
    case 2:
        if (s_atual <= 5000)
        {
            s_atual += (10/100)*s_atual; 
        }
        else {
            s_atual += (5/100)*s_atual;
        }

        break;

    case 3:
        s_atual += (8/100)*s_atual;

        break;
        
    default:
        break;
    }

    float aumento = s_atual - aux;

    printf("O salario %.2f foi reajustado para %.2f\nA correcao foi de %.2f\n\n", aux, s_atual, aumento);

    return 0;
}