#include <stdio.h>
int main(){

	int f, calculo;
	
	printf("Quantos graus em Fahrenheit está fazendo?");	
	scanf("%i", &f);

	calculo = ((f - 32) * 5) / 9;

	printf("A Temperatura em Celsius é %i\n", calculo);

	
	

}