#include <stdio.h>

int main() {
    int segundos_fornecidos = 0;
    int horas = 0, minutos = 0, segundos = 0, resto = 0;

    printf("Insira o tempo em segundos para ser convertido em horas, minutos e segundos: ");
    scanf("%d", &segundos_fornecidos);
    
    resto = segundos_fornecidos % 60;
    segundos = resto;
    resto = (segundos_fornecidos - segundos)/3660;
    minutos = resto; 
    resto = (segundos_fornecidos) / 3600;
    horas = resto; 
    
    printf("%d segundos sao: %d horas, %d minutos e %d segundos.\n", segundos_fornecidos, horas, minutos, segundos);
}