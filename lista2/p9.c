#include <stdio.h>

int somaImpares(int x, int y) {
    int soma = 0, temp;

    if(x > y) {
        temp = x;
        x = y;
        y = temp;
    }

    for(int i = x + 1; i < y; i++) {
        if (i % 2 != 0) { 
            soma += i;
        }
    }

    return soma;
}

int main(void) {
    int X, Y, resultado;

    printf("Digite dois números inteiros [X Y]: ");
    scanf("%d %d", &X, &Y);

    resultado = somaImpares(X, Y);

    printf("Soma dos números ímpares estritamente entre %d e %d: %d\n", X, Y, resultado);

    return 0;
}
