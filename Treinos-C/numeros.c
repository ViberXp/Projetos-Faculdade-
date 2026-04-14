#include <stdio.h> 
int main(){

    int num;

    scanf("%i", &num);

    if (num < 0){

        printf("Negativo\n");

    }else if (num > 0){

        printf("Positivo\n");


    }else{

        printf("Numero igual a 0\n");

    }

}