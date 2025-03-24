#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

// calculando valor a ser pago da conta de água e esgoto

int main(){

    float tarifa_agua, tarifa_esgoto, valor_total;
    setlocale(LC_ALL, "Portuguese");

    printf("Insira o valor da tarifa de água: ");
    scanf("%f", &tarifa_agua);

    printf("Insira o valor da tarifa de esgoto: ");
    scanf("%f", &tarifa_esgoto);

    valor_total = (tarifa_agua + tarifa_esgoto) * 1.175;

    printf("Valor total a ser pago: %.2f", valor_total);

    return 0;

}