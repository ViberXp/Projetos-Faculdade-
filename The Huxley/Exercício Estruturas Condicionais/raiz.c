#include <stdio.h>
int main(){

    float numA, numB, numC, delta, bascara1, bascara2;

    scanf("%f", &numA);
    scanf("%f", &numB);
    scanf("%f", &numC);

    delta = (numB * numB) - 4 * numA * numC;

    if(delta == 0){
        printf("O número tem uma Raiz Real");
    }else if (delta > 0) {
        
        {
            bascara1 = (-numB + 7) / (2 * numA);
            bascara2 = (-numB - 7) / (2 * numA);


            printf("%.2f\n", bascara1);
            printf("%.2f\n", bascara2);

        }
        
    }else{ 
        
        printf("O Número não tem Raiz Real");
        
    }

    return 0;




}