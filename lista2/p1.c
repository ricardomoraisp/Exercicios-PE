#include <stdio.h>

int somaDigitos(int n){
    int soma = 0;
    if(n <= 10){
        return n;
    }else{
        return n % 10 + somaDigitos(n/10);
    }
}

int main(void){
    int numero, resultado;

    printf("Digite um número: ");
    scanf("%d", &numero);

    resultado = somaDigitos(numero);
    printf("Resultado é: %d", resultado);

    return 0;
}