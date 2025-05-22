#include <stdio.h>

int main(){

  int idade = 20;
  float altura = 1.75;

  // Idade >= 18 = Verdadeiro
  // idade <= 30 = verdadeiro
  // verdaddeiro && verdadeiro
  // verdadeiro && altura > 1.70
  // verdadeiro && verdadeiro => verdadeiro
  
  if(idade >= 18 && idade <= 30 && altura > 1.70){
     printf("Você está na faixa etária e tem a altura adequada\n");
  } else {
     printf("Você não atende aos critérios\n");
  }


 



}