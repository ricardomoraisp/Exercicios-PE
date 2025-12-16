#include <stdio.h>

void fatoresPrimos(int n, int divisor){
    if(n == 1){
        return;
    }if(n % divisor == 0){
        printf("%d", divisor);
        fatoresPrimos(n/2, divisor);
    }
}

int main(void){
    int numero, divisor;

    printf("Digite um número e o divisor [A/B]: ");
    scanf("%d/%d", &numero, &divisor);

    return 0;
}