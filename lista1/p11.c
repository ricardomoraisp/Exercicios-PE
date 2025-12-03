#include <stdio.h>

int main(void){
    int num1, num2, soma = 0;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    for(int i = num1 + 1; i < num2; i++){
        if(i % 2 != 0){
            soma += i;
        }

    }

    printf("A soma dos ímpares entre eles é: %d", soma);

    return 0;
}