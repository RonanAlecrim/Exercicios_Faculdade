#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

// volume utiliz�vel de uma caixa d'�gua

int main(){

    float comprimento, altura, largura, volume_max, volume_util;
    setlocale(LC_ALL, "Portuguese");

    printf("Informe o comprimento: ");
    scanf("%f", &comprimento);

    printf("Informe a altura: ");
    scanf("%f", &altura);

    printf("Informe a largura: ");
    scanf("%f", &largura);

    volume_max = comprimento * altura * largura;
    volume_util = 0.9 * volume_max;

    printf("O volume m�ximo da caixa d'�gua �: %.2fm�\nVolume que pode ser armazenado: %.2fm�", volume_max, volume_util);

    return 0;
}