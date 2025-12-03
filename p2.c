#include <stdio.h>

int main(void){
    int distancia;
    float combu_gasto, consumo;

    printf("Digite a distância percorrida: ");
    scanf("%d", &distancia);

    printf("Digite o combustível gasto: ");
    scanf("%f", &combu_gasto);

    consumo = distancia / combu_gasto;

    printf("Consumo: %.3f km/l\n", consumo);


    return 0;
}