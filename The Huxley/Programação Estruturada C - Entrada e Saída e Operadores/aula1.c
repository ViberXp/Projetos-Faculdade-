#include <stdio.h>
int main() {
float x , y, maior;
printf("Digite  um valor x e y");
scanf("%f %f", &x, &y);

if(x > y) {
	maior = x;
}else{
	maior = y;
}

printf("O maior numero entre %f e %f é %f", x, y, maior);


}