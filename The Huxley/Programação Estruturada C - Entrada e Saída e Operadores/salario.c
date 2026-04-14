#include <stdio.h>
int main (){

    float salario,calculo, novoSalario;

    scanf("%f", &salario);

    calculo = salario * (7.5 / 100);

    novoSalario = salario + calculo;

    printf("%.2f", novoSalario);




}