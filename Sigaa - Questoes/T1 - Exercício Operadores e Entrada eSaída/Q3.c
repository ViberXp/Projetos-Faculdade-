#include <stdio.h>
int main() {

    int x, antecessor, sucessor;

    printf("Digite o número que aparecerá seu sucessor e anterior: ");
    scanf("%i", &x);

    sucessor = x + 1;
    antecessor = x - 1;

    printf("O Sucessor de %i é %i e seu Antecessor é %i\n", x, sucessor, antecessor);





}