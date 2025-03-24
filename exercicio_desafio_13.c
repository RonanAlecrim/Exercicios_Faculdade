#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    float salario, saude, educacao, alimentacao, vestuario, lazer, moradia, restante;

    printf("Informe o salário: ");
    scanf("%f", &salario);

    saude = 0.05 * salario;
    educacao = 0.12 * salario;
    alimentacao = 0.3 * salario;
    vestuario = 0.1 * salario;
    lazer = 0.05 * salario;
    moradia = 0.25 * salario;
    restante  = 0.13 * salario;

    printf("Valor aplicado em saúde: R$%.2f", saude);
    printf("Valor aplicado em educação: R$%.2f", educacao);
    printf("Valor aplicado em alimentação: R$%.2f", alimentacao);
    printf("Valor aplicado em vestuário: R$%.2f", vestuario);
    printf("Valor aplicado em lazer: R$%.2f", lazer);
    

}