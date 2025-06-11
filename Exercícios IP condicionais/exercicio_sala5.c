#include <stdio.h>

int main(){

    int qtd_pessoas, idade, i, max_idade = 0, min_idade = 100, contador = 0, soma = 0;
    float media;

    printf("Informe a quantidade de pessoas: ");
    scanf("%d", &qtd_pessoas);

    for (i = 0; i < qtd_pessoas; i++)
    {
        printf("Informe a idade da %d. pessoa: ", i+1);
        scanf("%d", &idade);
        
        soma += idade;

        if (idade >= 18)
        {
            contador++;
        }
        
        if (idade > max_idade)
        {
            max_idade = idade;
        }
        if (idade < min_idade)
        {
            min_idade = idade;
        }  
    }

    media = soma/qtd_pessoas;

    printf("Media das idades: %.2f\n", media);

    printf("Menor das idade: %d\n", min_idade);

    printf("Maior idade: %d\n", max_idade);

    printf("Numero de pessoas maiores de idade: %d\n", contador);
    
}