#include <stdio.h>
int main() {

    int dia, km,valorDia,valorKm;
    float total, totalValor, resultadoValor;

    scanf("%i", &dia);

    scanf("%i", &km);

    valorDia = dia * 30;

    valorKm = km * 0.01;

    
    total = (valorDia + valorKm) / 10;
    totalValor = valorDia + valorKm;

    resultadoValor = totalValor - total;





    printf("%.2f", resultadoValor);


    

}