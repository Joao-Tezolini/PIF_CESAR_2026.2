#include <stdio.h>

// esse programa nao leva em consideracao entradas que extrapolam o limite de um dia
// tambem nao leva em consideracao entradas invalidas como um horario de 25 horas ou minutos e segundos passando dos 59

int main() {
    int horas, minutos, segundos; // horario de inicio do experimento
    int experimento_em_segundos; // duracao do experimento
    int horas_final, minutos_final, segundos_final; // horario a ser retornado do fim do experimento

    // vamos receber o horario em que comecou o experimento
    printf("Insira o horario de inicio do experimento no formato hh mm ss (use espacos): ");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    // agora, vamos receber o tempo de experimento em segundos
    printf("Insira o tempo de experimento em segundos: ");
    scanf("%d", &experimento_em_segundos);

    // precisamos retornar no formato hh:mm:ss

    // supondo 14h sendo o inicio do experimento
    // supondo um experimento de 1h 20min e 40s
    // experimento precisa ter horario final como 15h 20min 40s
    // impresso no formato 15:20:40
    
    // vamos transformar o horario apenas em segundos
    int temp = 0;
    temp += segundos;
    temp += minutos*60;
    temp += horas*60*60;

    // agora, vamos somar os segundos de experimento
    temp += experimento_em_segundos;

    // agora, vamos transformar os segundos finais em horas finais, minutos finais e segundos finais
    //
    // horas
    horas_final = temp / 3600; // a divisao de inteiros arredonda e desconsidera o resto (minutos e segundos)

    // minutos
    temp = temp % 3600;
    minutos_final = temp / 60;

    // segundos
    segundos_final = temp % 60;

    printf("%d:%d:%d\n", horas_final, minutos_final, segundos_final);

    return 0;
}