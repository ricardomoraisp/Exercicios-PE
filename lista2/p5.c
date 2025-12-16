#include <stdio.h>

int passos(int n) {
    if (n == 1)
        return 0;

    if (n % 2 == 0)
        return 1 + passos(n / 2);
    else
        return 1 + passos(n - 1);
}

int main(void){
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    printf("Número de passos: %d\n", passos(n));

    return 0;
}
