#include <stdio.h>

int main(void){
    int N, horas, minutos, segundos, resto;

    printf("Digite um valor em segundos: ");
    scanf("%d", &N);

    horas = N / 3600; //hora completa
    resto = N % 3600; //calcula o quanto que sobra da hora
    minutos = resto / 60; //calcula o minuto completo
    segundos = resto % 60; //calcula o quanto que sobra do minuto

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}