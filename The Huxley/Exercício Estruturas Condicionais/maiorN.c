#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int num1, num2, num3;
    
    scanf("%i", &num1);
    scanf("%i", &num2);
    scanf("%i", &num3);
    
    if(num1 > num2 && num1 > num3) {
        
        printf("%i", num1);
        
    }else if(num2 > num1 && num2 > num3) {
        
        printf("%i", num2);
        
    }
    
    if(num3 > num1 && num3 > num1) {
        
        printf("%i", num3);
        
    }
    
	return 0;
}