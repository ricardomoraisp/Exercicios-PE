#include <stdio.h>

int main(void){
    double A, B, MEDIA; //usei double para ter mais precisão nas 5 casas decimais, em casos que precise

    printf("Digite dois números decimais [A B]: ");
    scanf("%f %f", &A, &B);
    A = A * 3.5; //Calcula os pesos
    B = B * 7.5; //Calcula os pesos
    MEDIA = (A + B) / (3.5 + 7.5); 

    printf("MEDIA = %.5f\n", MEDIA);

    return 0;
}