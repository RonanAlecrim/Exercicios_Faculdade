#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//calcular o valor da hipotenusa de um triângulo

int main(){

    int c1, c2;
    double h;

    printf("Informe o primeiro cateto: ");
    scanf("%d", &c1);

    printf("Informe o segundo cateto: ");
    scanf("%d", &c2);

    h = sqrt(pow(c1, 2) + pow(c2, 2));

    printf("\nValor da hipotenusa: %.2lf", h);

    return 0;

}