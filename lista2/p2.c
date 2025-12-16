#include <stdio.h>
//a questão não diz se é recursiva então fiz não recursiva

int somaMultiplos(int inicio, int fim, int k){
    int soma = 0;

     for (int i = inicio; i <= fim; i++) {
        if (i % k == 0) {
            soma += i;
        }
    }

    return soma;
}

int main(void){
    int i, f, numero;

    printf("Digite o número desejado: ");
    scanf("%d", &numero);

    printf("Digite o inicio e o fim [A B]: ");
    scanf("%d %d", &i, &f);

    printf("A soma dos multiplos de %d é: %d", numero, somaMultiplos(i, f, numero));

    return 0;
}