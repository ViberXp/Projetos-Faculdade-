#include <stdio.h>
int main (){

    int eleitor1;
    printf("Digite Sua idade: ");
    scanf("%i", &eleitor1);

    if (eleitor1 < 16){

        printf("Não Eleitor\n");

    }else if(eleitor1 >= 18 || eleitor1 <= 65){

        printf("Eleitor Obrigatorio\n");

    }else if( eleitor1 == 16 || eleitor1 > 65){

        printf("Eleitor Facultativo\n");

    }

}