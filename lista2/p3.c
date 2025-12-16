#include <stdio.h>

int somaDiv(int n, int d) {
    if (d == 0)
        return 0;

    if (n % d == 0)
        return d + somaDiv(n, d - 1);
    else
        return somaDiv(n, d - 1);
}

int ehPerfeito(int n) {
    if (n <= 1)
        return 0;

    return somaDiv(n, n / 2) == n;
}

int main(void) {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (ehPerfeito(numero))
        printf("%d é um numero perfeito.\n", numero);
    else
        printf("%d nao é um numero perfeito.\n", numero);

    return 0;
}
