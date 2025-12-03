#include <stdio.h>

int main(void){
    int velocidade_rel = 150; //Os carros estão em sentidos opostos v1 + v2
    float valor_km, tempo;

    printf("Digite um valor em quilômetros: ");
    scanf("%f", &valor_km);

    //Considerei a fórmula Sa = S0 + Vt e Sb = S0 + Vt e T = distância/Vrel

    tempo = valor_km / velocidade_rel;
    tempo = tempo * 60; //horas para minutos

    printf("Os carros se encontraram após %.2f minutos\n", tempo);

    return 0;
}