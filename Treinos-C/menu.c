#include <stdio.h> 
int main(){

    int n1;

    printf("Digite qual Opção Você deseja: \n");
    printf("1- Pagar Faturas Atrasadas.\n");
    printf("2- Renovar o Plano\n");
    printf("3- Sair\n");

    scanf("%d", &n1);

    switch (n1)
    {
    case 1:
        
        printf("Suas Faturas atrasadas são essas: \n");
        break;

    case 2:
        printf("Seu Plano é de 39,99\n");
        break;
    case 3:
        break;
    
    default:
        printf("Número Invalido\n");
        break;
    }



}