#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

// conversor de Fahrenheit para Celsius

int main(){

    float temp_C, temp_F;

    printf("Insira a temperatura em Fahrenheit: ");
    scanf("%f", &temp_F);

    temp_C = (temp_F - 32) / 1.8;

    printf("Temperatura em Celsius: %.2f", temp_C);

    return 0;
    

}