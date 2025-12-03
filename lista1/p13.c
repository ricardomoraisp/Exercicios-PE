#include <stdio.h>

int main(void){
    int numero, maior, posicao;

    for(int i = 0; i < 10; i++){
        printf("Digite um número [%d]: ", i+1);
        scanf("%d", &numero);

        if(i == 0){
            maior = numero;
        }else{
            if(numero > maior){
                maior = numero;
                posicao = i;
            }
        }
    }
    
    printf("O maior valor é: %d\tna posição: %d", maior, posicao + 1);
    
    return 0;
}