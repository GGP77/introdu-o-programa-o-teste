#include <stdio.h>

int main(){
    int variavel;

    printf("Digite um valor: \n");
    scanf("%d", &variavel);

    switch (variavel){
    case 1:
        printf("Código a ser executado se a variável for == 1\n");
        break;
    case 2:
        printf("Código a ser executado se a variável for == 2\n");
    break;
    default:
        printf("Código a ser executado se a variável não for 1 ou 2\n");
    }
}