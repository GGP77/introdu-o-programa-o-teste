int main(){

    /*
Incremento (++)
Pré-Incemento ++a
Pós-Incremento a++
Decremento (--)
Pré-Decremento --a
Pós-Decremento a--
*/

int numero1 = 1, resultado;

printf("Antes do Incremento: %d\n", numero1);
//numero1 = numero1 + 1;
//numero1 += 1;
//Pos incremento:
//resultado = numero1;
//numero1++;
resultado = numero1++;
//printf("Após o Incremento: %d\n", numero1);
printf("Apos Pos-incremento - Numero 1 : %d - Resultado: %d\n", numero1, resultado);

resultado = ++numero1;
printf("Apos Pré-incremento - Numero 1 : %d - Resultado: %d\n", numero1, resultado);

//numero1 = numero1 - 1;
//numero1 -= 1;
//numero1--;
//printf("Após o Decremento: %d\n", numero1);

resultado = numero1--;
printf("Apos Pos-decremento - Numero 1 : %d - Resultado: %d\n", numero1, resultado);

resultado = --numero1;
printf("Apos Pre-decremento - Numero 1 : %d - Resultado: %d\n", numero1, resultado);


}