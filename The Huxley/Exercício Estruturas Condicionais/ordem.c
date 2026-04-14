#include <stdio.h>
int main(){

    int num1, num2, num3;

    scanf("%i", &num1);
    scanf("%i", &num2);
    scanf("%i", &num3);

    if (num1 < num2 > num3)
    {
        printf("%i", num1);
        printf("%i", num2);
        printf("%i", num3);
    }else if (num2 > num3 < num1)
    {
        printf("%i", num2);
        printf("%i", num3);
        printf("%i", num1);
    }else
    {
        printf("%i\n", num3);
        printf("%i\n", num2);
        printf("%i\n", num1);
    }
    

}