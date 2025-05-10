#include <stdio.h>

int main() {
    float a = 833.932;
    float b = 20.766;
    float quociente = (float) b / a; //"a" é explicidamente convertido para float - float entre parenteses chama-se casting

    printf("Quociente: %.3f\n", quociente);

    //float nota1, nota2, nota3;
    //float media;

    //printf("*** Programa de Cálculo de Média *** \n");

    //printf("Digite a Nota 1: \n");
    //scanf("%f", &nota1);

    //printf("Digite a Nota 2: \n");
    //scanf("%f", &nota2);

   // printf("Digite a Nota 3: \n");
   // scanf("%f", &nota3);

   // media = (nota1 + nota2 + nota3) / 3;

    //printf("A Média das notas é: %.2f", media);



    return 0;

}