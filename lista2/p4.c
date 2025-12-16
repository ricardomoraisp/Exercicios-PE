#include <stdio.h>

void minMax(int a, int b, int c, int *min, int *max){
    //pega o menor
    if(a <=b && a <= c){
        *min = a;
    }else if(b <= a && b <= c){
        *min = b;
    }else{
        *min = c;
    }
    //pega o maior
    if(a >=b && a >= c){
        *max = a;
    }else if(b >= a && b >= c){
        *max = b;
    }else{
        *max = c;
    }
}

int main(void) {
    int a, b, c, min, max;

    printf("Digite três números [A B C]: ");
    scanf("%d %d %d", &a, &b, &c);

    minMax(a, b, c, &min, &max);

    printf("Menor: %d\t Maior: %d", min, max);

    return 0;
}
