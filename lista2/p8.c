#include <stdio.h>

double mediaPositivos(int n[], int *quantidade){
    int count = 0, soma = 0;

    for(int i = 0; i < 6; i++) {
        if (n[i] > 0) {
            count++;
            soma += n[i];
        }
    }

    *quantidade = count;

    if (count > 0)
        return (double)soma / count;
    else
        return 0.0;
}


int main(void){
    int n[6], positivos;
    double media;

    for(int i = 0; i < 6; i++){
        printf("Digite um número: ");
        scanf("%d", &n[i]);
    }

    media = mediaPositivos(n, &positivos);

    printf("A soma dos positivos é: %d/tA média é: %.2f \n", positivos, media);

    return 0;
}