#include <stdio.h>

int main(void){
    int M, N, soma = 0;

    printf("Digite um par de números: ");
    scanf("%d %d", &M, &N);

    while(N > 0 && M > 0){
        if(N > M){
            for(int i = M; i < N + 1; i++){ //N + 1 porque é inclusivo
                printf("%d ", i);
                soma += i;

            }
        }else{
            for(int i = N; i < M + 1; i++){ //N + 1 porque é inclusivo
                printf("%d ", i);
                soma += i;
            }
        }
        printf("\n");
        printf("A soma é %d\n", soma);

        printf("Digite um par de números: ");
        scanf("%d %d", &M, &N);
        soma = 0;

    }
    printf("FIM");

    return 0;
}