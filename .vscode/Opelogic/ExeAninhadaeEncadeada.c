#include <stdio.h>

int main(){

  /* int idade;

   printf("Digite sua idade: ");
   scanf("%d", &idade);

   //Criança < 12
   //Adolescente <= x < 18
   //Adulto <= 18 x < 60 
   //Idoso > 60

   if(idade < 12 ){
      printf("Você é uma criança!\n");
   } else if(idade >= 12 && idade < 18){
      printf("Você é um adolescente!\n");
   } else if(idade >= 18 && idade < 60){
      printf("Você é adulto!\n");
   } else {
      printf("Você é um idoso!\n");
   }*/

   int nota;

   printf("Digite sua nota: \n");
   scanf("%d", &nota);

   //A >= 90
   //B >= 80
   //C >= 70
   //D >= 60
   //E >= 50
   //F

   if (nota >= 90){
      printf("O Conceito é A!\n");
   } else if (nota >= 80){
      printf("O Conceito é B!\n");
   } else if(nota >= 70){
      printf("O Conceito é C!\n");
   } else if(nota >= 60){
      printf("O Conceito é D!\n");
   } else if(nota >= 50){
      printf("O Conceito é E!\n");
   } else {
      printf("O Conceito é F!\n");
   }



}