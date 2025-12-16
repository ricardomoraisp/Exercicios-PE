#include <stdio.h>

int somaDivisores(int n, int d) {
    if (d == 0)
        return 0;

    if (n % d == 0)
        return d + somaDivisores(n, d - 1);
    else
        return somaDivisores(n, d - 1);
}

int amigos(int a, int b) {
    if (a <= 0 || b <= 0){
        return 0;
    }else{
        return somaDivisores(a, a / 2) == b && somaDivisores(b, b / 2) == a;
    }
        
}

int main(void) {
    int a, b;

    printf("Digite dois números [A B]: ");
    scanf("%d %d", &a, &b);

    if (amigos(a, b))
        printf("%d e %d são números amigos.\n", a, b);
    else
        printf("%d e %d não são números amigos.\n", a, b);

    return 0;
}

