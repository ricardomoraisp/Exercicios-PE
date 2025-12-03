#include <stdio.h>
/*Por ser um exercício mais básico, usei pi como variável, mas acho que ficaria melhor como constante
usando #define.*/
int main(void){ 
    double pi = 3.14159, raio, volume;

    printf("Digite o raio de uma esfera: ");
    scanf("%lf", &raio);

    volume = (4.0 / 3) * pi * (raio * raio * raio);

    printf("O volume = %.3f\n", volume);

    return 0;
}