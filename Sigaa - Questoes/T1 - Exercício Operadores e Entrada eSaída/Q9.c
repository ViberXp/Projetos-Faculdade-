#include <stdio.h>
int main (){

    float altura, peso, resultado;

    printf("Digite seu Peso: ");
    scanf("%f", &peso);

    printf("Digite sua Altura: ");
    scanf("%f", &altura);


    resultado = peso / (altura * altura);

    printf("%f\n", resultado);



}