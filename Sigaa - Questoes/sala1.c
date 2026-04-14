#include <stdio.h>

int main(){

    int quantChoco, quantDoce, quantBiscoito;
    float lucroChoco, lucroDoce, lucroBiscoito;
    float valorChoco, valorDoce, valorBiscoto, total;

    printf("Qual a quantidade de Chocolates: ");
    scanf("%d", &quantChoco);

    printf("Qual a quantidade de Doce: ");
    scanf("%d", &quantDoce);

    printf("Qual a quantidade de Biscoito: ");
    scanf("%d", &quantBiscoito);

    printf("Qual o Lucro dos Chocolates: ");
    scanf("%f", &lucroChoco);

    printf("Qual o Lucro dos Doces de Leite: ");
    scanf("%f", &lucroDoce);

    printf("Qual o Lucro dos Biscoitos: ");
    scanf("%f\n", &lucroBiscoito);

    valorChoco = quantChoco * lucroChoco;
    valorDoce = quantDoce * lucroDoce;
    valorBiscoto = quantBiscoito * lucroBiscoito;

    total = valorBiscoto + valorDoce + valorChoco; 

    valorChoco = (valorChoco / total) * 100;
    valorDoce = (valorDoce / total) * 100;
    valorBiscoto = (valorBiscoto / total) * 100;

    printf("O Lucro por Biscoito é: %.2f%%\n", valorBiscoto);
    printf("O Lucro por Doce de Leite é: %.2f%%\n", valorDoce);
    printf("O Lucro por Chocolate é: %.2f%%\n", valorChoco);

    return 0;
}