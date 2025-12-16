#include <stdio.h>

void reduz(int *a, int *b) {
    int operacoes = 0;

    while (*a != *b) {
        if (*a > *b) {
            *a = *a - *b;
        } else {
            *b = *b - *a;
        }
        operacoes++;
    }

    printf("Número de operações até estabilização: %d\n", operacoes);
}

int main(void) {
    int x, y;

    printf("Digite dois números inteiros [X Y]: ");
    scanf("%d %d", &x, &y);

    reduz(&x, &y);

    printf("Valor final de a e b: %d\n", x);

    return 0;
}
