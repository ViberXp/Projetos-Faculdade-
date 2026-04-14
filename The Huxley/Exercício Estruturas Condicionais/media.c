#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float n1, n2, n3, media;
    
    scanf("%f", &n1 );
    scanf("%f", &n2 );
    scanf("%f", &n3 );
    
    media = (n1 + n2 + n3) / 3;
    
    if (media >= 7){
        
        printf("Aprovado");
    
    
    }else if (media >= 3){
        
        printf("Prova Final");
        
    }else{
        
        printf("Reprovado");
        
    }
    
    
    
	return 0;
}