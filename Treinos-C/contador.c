#include <stdio.h>

int main(){

    int n, soma = 0, contador, num, resultado;

    while(1){
        scanf("%i", &n);

        if(n == -1){
            break;
        }

        soma = soma + n;
        contador++;

        if(n <= 12){
            resultado = 1;
            for(num = n; num > 0; num--){
                resultado = resultado * num;
            }
            printf("%d\n", resultado);
        }
    }
}