#include <stdio.h>

int inverte(int n, int acumulador) {
    if (n == 0){
        return acumulador;
    }
    else{
        return inverte(n / 10, acumulador * 10 + n % 10);
    }
}

int ehPalindromo(int n) {
    if(n == inverte(n, 0)){
        return 1;
    }else{
        return 0;
    }
}

int main(void) {
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if (ehPalindromo(n))
        printf("%d é um número palíndromo.\n", n);
    else
        printf("%d não é um número palíndromo.\n", n);

    return 0;
}

