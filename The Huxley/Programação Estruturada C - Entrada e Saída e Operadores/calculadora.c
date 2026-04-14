#include <stdio.h>
int main (){

    float num01, num02, soma, subitraçao, multiplicaçao, divisao;

    scanf("%f", &num01);
    scanf("%f", &num02);

    soma = num01 + num02;
    subitraçao = num01 - num02;
    multiplicaçao = num01 * num02;
    divisao = num01 / num02;

    printf("%.2f\n", soma);
    printf("%.2f\n", subitraçao);
    printf("%.2f\n", multiplicaçao);
    printf("%.2f\n", divisao);




}