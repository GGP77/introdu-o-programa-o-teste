#include <stdio.h>

int main(){
    /*
    soma(+)
    subtração(-)
    multiplicação(*)
    divisão(/)
    */

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Entre com o número 1: \n");
    scanf("%d", &numero1);
    printf("Entre com o número 2: \n");
    scanf("%d", &numero2);

     //Operação soma
    soma = numero1 + numero2;

     //Operação subtração
    subtracao = numero1 - numero2;

     //Operação multiplicação
    multiplicacao = numero1 * numero2;

     //Operação divisão
    divisao = numero1 / numero2;

    printf("A Soma é: %d\n", soma);
    printf("A Subtração é: %d\n", subtracao);
    printf("A Multiplicação é: %d\n", multiplicacao);
    printf("A Divisão é: %d\n", divisao);



}