#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

// inverter um n�mero no formato MCDU.

int main(){

    int num, milhar, centena, dezena, unidade, invertido;
    setlocale(LC_ALL, "Portuguese");

    printf("Informe o n�mero (MCDU): ");
    scanf("%d", &num);

    unidade = num % 10;
    dezena = (num / 10) % 10;
    centena = (num / 100) % 10;
    milhar = (num / 1000) % 10;

    invertido = unidade*1000 + dezena * 100 + centena * 10 + milhar;

    printf("N�mero Invertido: %d", invertido);

    return 0;


}