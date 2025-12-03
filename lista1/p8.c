#include <stdio.h>

int main(void){
    int inicio_hora, inicio_minutos, hora_final, minuto_final, duracao, inicio, termino, duracao_hora, duracao_minuto;

    printf("Digite a hora de início do jogo [HH:MM]: ");
    scanf("%d:%d", &inicio_hora, &inicio_minutos);

    printf("Digite a hora de término do jogo [HH:MM]: ");
    scanf("%d:%d", &hora_final, &minuto_final);

    //Converte tudo em minutos
    inicio = inicio_hora * 60 + inicio_minutos;
    termino = hora_final * 60 + minuto_final;

    if (termino < inicio) {
        termino += 24 * 60;
    }

    duracao = termino - inicio;

    duracao_hora = duracao / 60;
    duracao_minuto = duracao % 60;

    printf("Duracao do jogo: %d horas e %d minutos\n", duracao_hora, duracao_minuto);

    return 0;
}