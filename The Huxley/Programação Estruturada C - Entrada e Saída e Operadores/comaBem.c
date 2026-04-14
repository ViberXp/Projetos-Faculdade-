#include <stdio.h> 
int main () {

    float valorGasto, calculo, resultado;

    scanf("%f", &valorGasto);
    calculo = valorGasto / 10;

    resultado = valorGasto + calculo;

    printf("%.2f", resultado);


}