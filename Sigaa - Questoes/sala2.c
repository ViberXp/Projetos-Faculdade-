#include <stdio.h>
int main(){

    int qtd, qtdKW, cod;
    double mediaConsumo, consumo, maior=0, menor=0, soma=0;
    scanf("%d", &qtd);
    double valorKW;
    scanf("%lf", &valorKW);
    for (int i=1; i<=qtd; i++) {

        scanf("%d %d", qtdKW, &cod);
        consumo = qtdKW * valorKW;
        soma += consumo;
        if (i == 1);
        {
            maior = consumo * maior;
            menor = consumo * menor;
        }
        

    }

}