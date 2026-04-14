#include <stdio.h>
int main() {

    float salario, novoSalario1, novoSalarioFn1, novoSalario2, novoSalarioFn2, novoSalario3, novoSalarioFn3;

    scanf("%f", &salario);

    if (salario >= 500){

        novoSalario1 = salario * 0.1;
        novoSalarioFn1 = salario + novoSalario1;

        printf("%.2f", novoSalarioFn1);

    } else if (salario > 300)
    {
        novoSalario2 = salario * 0.07;
        novoSalarioFn2 = salario + novoSalario2;

        printf("%.2f", novoSalarioFn2);
    }else{

        novoSalario3 = salario * 0.05;
        novoSalarioFn3 = salario + novoSalario3;

        printf("%.2f", novoSalarioFn3);

    }
    


}