#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

// calcular a distancia entre dois pontos

int main(){

    double x1, y1, x2, y2, distancia;

    setlocale(LC_ALL, "Portuguese");

    printf("Informe o x1: ");
    scanf("%lf", &x1);

    printf("Informe o y1: ");
    scanf("%lf", &y1);

    printf("Informe o x2: ");
    scanf("%lf", &x2);

    printf("Informe o y2: ");
    scanf("%lf", &y2);

    distancia = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2) );

    printf("Distância entre os pontos: %lf", distancia);

    return 0;
}