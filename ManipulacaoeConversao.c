#include <stdio.h>

int main() {
    int a = 1494599;
    float b = 728.8;
    float quociente;
    
    quociente = (float) a / b; //"a" é explicidamente convertido para float - float entre parenteses chama-se casting

    printf("Quociente: %f\n", quociente);

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