#include <stdio.h>
int main(){

    int idade;
    float renda;

    // if (condição1) {}
    //     if(condição2)
    // Codigo a ser executado se condicao1 e condicao2 forem vedadeiras
    // } else {} Caso as duas condições forem falsas

    /*Programa que verifica se uma pessoa está qualificada para um desconto espelcial
    com base na idade e na renda mensal.
    A pessoa deve ter mais de 60 anos ou menos de 18 anos e ter uma 
    renda mensal abaixo de 2000*/

    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Digite sua renda mensal: \n");
    scanf("%f", &renda);
    
    if(idade <= 18 || idade >= 60){
        if ( renda < 2000){
            printf("Você tem direito ao desconto!\n");
        } else{
            printf("Você não tem direito ao desconto devido à renda!\n");
        }

    } else {
        printf("Você não atende aos critérios devido a idade!\n");
    }
}