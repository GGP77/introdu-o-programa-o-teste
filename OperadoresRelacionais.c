#include <stdio.h>

int main(){

int a = 10;
int b = 20;

printf("a > b: %d\n", a > b);
printf("a < b: %d\n", a < b);
printf("a == b: %d\n", a == b);
printf("a != b: %d\n", a != b);

int x = 5;
float y = 5.0;
char c = 'a';

printf("x >= y: %d\n", x >= y);
printf("x == y: %d\n", x == y);
printf("x != y: %d\n", x != y);

printf("a >= c: %d\n", a <= c);
printf("O valor ASCCI de %c é %d: \n", c, c);



return 0;
}