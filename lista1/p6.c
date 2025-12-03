#include <stdio.h>

int main(void){
    float x, y;

    printf("Digite uma coordenada [X Y]: ");
    scanf("%f %f", &x, &y);

    
     
    if(x == 0 && y == 0){
        printf("Origem!\n");
    }else if(x == 0){
        printf("eixo X\n");
    }else if(y == 0){
        printf("eixo Y\n");
    }else if(x > 0 && y > 0){
        printf("Primeiro Quadrante\n");
    }else if(x < 0 && y > 0){
        printf("Segundo quadrante\n");
    }else if(x < 0 && y < 0){
        printf("Terceiro Quadrante\n");
    }else if(x > 0 &&  y < 0){
        printf("Quarto quadrante\n");
    }

    return 0;
}