#include <stdio.h>

int main(void){
    float salario, valor_aumento;

    printf("Digite seu salário: ");
    scanf("%f", &salario);

    /*Por existirem poucas alternativas tomei a liberdade de escrever o percentual manualmente.
    caso contrário teria usado uma variável.*/
    if(salario < 1500){
        valor_aumento = salario * 0.2;
        salario += valor_aumento;
        printf("Novo salário: %.2f\tValor do aumento: %.2f\tPercentual: 20%%", salario, valor_aumento);
    }else if(salario > 5000){
        valor_aumento = salario * 0.1;
        salario += valor_aumento;
        printf("Novo salário: %.2f\tValor do aumento: %.2f\tPercentual: 10%%", salario, valor_aumento);
    }else{
        valor_aumento = salario * 0.15;
        salario += valor_aumento;
        printf("Novo salário: %.2f\tValor do aumento: %.2f\tPercentual: 15%%", salario, valor_aumento);
    }


    return 0;
}