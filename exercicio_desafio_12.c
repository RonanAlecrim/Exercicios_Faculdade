#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

//rendimento do salario de um casal a juros compostos

int main(){

    float salario_jose, salario_maria, rendimento;
    setlocale(LC_ALL, "Portuguese");

    printf("Informe o sal�rio de Jos�: ");
    scanf("%f", &salario_jose);

    printf("Informe o sal�rio de Maria: ");
    scanf("%f", &salario_maria);

    rendimento = ((0.08 * salario_jose) + (0.08 * salario_maria)) * pow(1 + 0.005, 9);
    
    printf("Total do rendimento para gastar nas f�rias: R$%.2f", rendimento);

    return 0;

}