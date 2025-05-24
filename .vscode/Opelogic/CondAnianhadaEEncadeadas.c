#include <stdio.h>

int main(){

   /* int condicao1, condicao2;

    //estrutura Aninhada
    if(condicao1){
      if(condicao2){
        //Código a ser executado se condicao1 e condicao2 forem verdadeiras
      }
    }

    //Estrutura Encadeada
    if(condicao1){
        //Código a ser executado se condicao1 for verdadeira
    } else if(condicao2){
        //Código a ser executado se condicao1 for falso e condicao2 for verdadeira
    } else {
        //Código a ser executado se todas as condições anteriores forem falsas
    }*/

    int numero;

    printf("Digite o número: \n");
    scanf("%d", &numero);

    if(numero > 0 ){
      if (numero % 2 == 0)
      {
        printf("Número par\n");
      } else {
        printf("Número impar \n");
      }
      
      printf("Número positivo! \n");
    } else if (numero == 0){
      printf("Número é zero! \n");
     } else {
        printf("Número negativo! \n");
      }
    

}