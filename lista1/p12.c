#include <stdio.h>

int main(void){
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("A tabuada de %d é: ", numero);
    for(int i = 0; i < 21; i++){
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}