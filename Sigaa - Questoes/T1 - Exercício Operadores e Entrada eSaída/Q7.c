#include <stdio.h>
int main () {

    int valor, num50, num20, num10, num05, num02,num01 , resto;

    scanf("%i", &valor);

    num50 = resto / 50;
    resto = resto % 50;
    num20 = resto / 20;
    resto = resto % 20;
    num10 = resto / 10;
    resto = resto % 10;
    num05 = resto / 5;
    resto = resto % 5;
    num02 = resto / 2;
    resto = resto % 2;
    num01 = resto / 1;
    resto = resto % 1;

    printf("%i\n", valor);
    printf("%i nota(s) de R$ 50,00\n", num50);
    printf("%i nota(s) de R$ 20,00\n", num20);
    printf("%i nota(s) de R$ 10,00\n", num10);
    printf("%i nota(s) de R$ 5,00\n", num05);
    printf("%i nota(s) de R$ 2,00\n", num02);
    printf("%i nota(s) de R$ 1,00\n", num01);
    

}