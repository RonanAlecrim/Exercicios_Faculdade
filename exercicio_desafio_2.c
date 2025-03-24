#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

// volume utilizável de uma caixa d'água

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

    printf("O volume máximo da caixa d'água é: %.2fm³\nVolume que pode ser armazenado: %.2fm³", volume_max, volume_util);

    return 0;
}