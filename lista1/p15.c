#include <stdio.h>

int main(void){
    int N;
    float X,Y;

    printf("Digite quantos pares para serem digitados: ");
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        printf("digite um par para ser divido modelo ->[x/y]: "); //achei bonito e melhor de entender assim
        scanf("%f/%f", &X, &Y);

        if(Y == 0){
            printf("Divisão impossivel! [Y = 0]\n");
        }else{
            printf("Divisão de %.2f / %.2f = %.2f\n", X, Y, X/Y); 
        }
        //preferi fazer diferente dessa vez e não usar variável para divisão! 
    }


    return 0;
}