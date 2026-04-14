#include <stdio.h>
int main(){

    float alturaParede, larguraParede, alturaAju, larguraAju, calculo;

    printf("Qual a Altura da Parede: ");
    scanf("%f", &alturaParede);

    printf("Qual a Largura da Parede: ");
    scanf("%f", &larguraParede);

    printf("Qual a Altura do Azulejo: ");
    scanf("%f", &alturaAju);

    printf("Qual a Largura da Azulejo: ");
    scanf("%f", &larguraAju);


    calculo = (alturaParede * larguraParede) /  (alturaAju * larguraAju);

    printf("Sua Parede precisa de %.1f Azulejo(s) para Preencher a parede\n", calculo);

}