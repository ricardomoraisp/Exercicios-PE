#include <math.h>
#include <stdio.h>
//Usei o math.h porque a questão não indica qual método usar (Math.h/ método de newton, etc), portanto
//optei pelo mais simples.

int main(void){
    float A, B, C, raiz0, raiz1, delta;

    printf("Digite três valores reais[A B C]: ");
    scanf("%f %f %f", &A, &B, &C);

    delta = (B * B) - (4 * A * C);
    if(delta < 0){
        printf("Impossível calcular!! [Delta Negativo!!]\n");
    }else if (A == 0){
        printf("Impossível calcular!! [A = 0]\n");
    }else{
        raiz0 = (-B - sqrt(delta)) / (2 * A);
        raiz1 = (-B + sqrt(delta)) / (2 * A);
        
        printf("As raízes reais são: %.2f e %.2f\n", raiz0, raiz1);
    }

    return 0;
}