#include <stdio.h>

int main() {

    int numero;
    int d1, d2, d3, d4;
    int numeroInvertido;

    printf("Digite um numero com quatro algarismos: ");
    scanf("%d", &numero);

    d1 = numero / 1000;
    d2 = (numero % 1000) / 100;
    d3 = (numero % 100) / 10;
    d4 = numero % 10;

    numeroInvertido = (d4 * 1000) + (d3 * 100) + (d2 * 10) + d1;

    printf("Numero invertido: %d\n", numeroInvertido);

    return 0;
}