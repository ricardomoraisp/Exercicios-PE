#include <stdio.h>

void fatoresPrimos(int n, int divisor){
    if(n == 1){
        return;
    }if(n % divisor == 0){
        printf("%d ", divisor);
        fatoresPrimos(n / divisor, divisor);
    }else{
        fatoresPrimos(n, divisor + 1);
    }
}

int main(void){
    int numero, divisor;

    printf("Digite um número e o divisor [A/B]: ");
    scanf("%d/%d", &numero, &divisor);

    printf("Fatores primos: \n");
    fatoresPrimos(numero, divisor);

    return 0;
}