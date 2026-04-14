#include <stdio.h>

int main() {

    int numero;
    int primeiroDigito;
    int segundoDigito;
    int numeroInvertido;

    printf("Digite um numero com dois algarismos: ");
    scanf("%d", &numero);

    primeiroDigito = numero / 10;
    segundoDigito = numero % 10;

    numeroInvertido = (segundoDigito * 10) + primeiroDigito;

    printf("Numero invertido: %d\n", numeroInvertido);

    return 0;
}