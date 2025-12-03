#include <stdio.h>

int main(void){
    int num1, num2, num3, maior, menor, meio;

    printf("Digite três valores inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 < num2 && num1 < num3){
        menor = num1;
        if(num2 < num3){
            maior = num3;
            meio = num2;
        }else{
            meio = num3;
            maior = num2;
        }

    }else if(num2 < num1 && num2 < num3){
        menor = num2;
        if(num1 < num3){
            maior = num3;
            meio = num1;
        }else{
            maior = num1;
            meio = num3;
        }
    }else if(num3 < num2 && num3 < num1){
        menor = num3;
        if(num1 < num2){
            maior = num2;
            meio = num1; 
        }else{
            maior = num1;
            meio = num2;
        }
    }else{
        printf("Digite três valores diferentes!\n5"); //A questão não especifica se devo tratar números iguais.
    }

    printf("%d %d %d", menor, meio, maior);
    printf("\n");
    printf("%d %d %d", num1, num2, num3);

    return 0;
}