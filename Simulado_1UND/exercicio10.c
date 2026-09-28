#include <stdio.h>

int main() {
    int segundos, minutos, horas;
    int segundos_iniciais;
    int temp;

    printf("Insira o valor em segundos que será convertido em horas, minutos e segundos: ");
    scanf("%d", &segundos_iniciais);

    // ex: 3665 segundos = 1h 1 minuto e 5 segundos => 3600s + 60s + 5s

    // salvo os segundos iniciais em temp para poder imprimir o tempo inicial em segundos ao final do programa
    temp = segundos_iniciais;

    // calculo as horas através do resto e retiro as horas (em formato de segundos) do total
    horas = temp / 3600;
    temp = temp - horas*3600;
    
    // calculo os minutos (já retirado as horas) e retiro os minutos (em formato de segundos) do total
    minutos = temp / 60;
    temp = temp - minutos*60;

    // só sobraram segundos puros, então não há necessidade de conta alguma
    segundos = temp;

    // imprimo no formato "Xh Xm Xs"
    printf("O tempo em segundos fornecido foi %ds\nConvertido para horas, minutos e segundos resulta em: %dh %dm %ds\n\n", segundos_iniciais, horas, minutos, segundos);

    return 0;
}