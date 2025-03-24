#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define pi 3.1415926

//calcular os valores dos catetos de um triângulo retângulo a partir no ângulo e da hipotenusa

int main(){

    float h, cA, cO , a_graus, a_radianos;

    printf("Informe a hipotenusa: ");
    scanf("%f", &h);

    printf("Informe o ângulo: ");
    scanf("%f", &a_graus);

    a_radianos = a_graus * pi/180; // a função seno e consseno só aceitam em radianos então fiz um conversor pra ficar mais intuitivo

    cA = cos(a_radianos) * h;
    cO = sin(a_radianos) * h;

    printf("Cateto Adjacente = %.2f, Cateto Oposto = %.2f, Hipotenusa = %.2f", cA, cO, h);

    return 0;
}