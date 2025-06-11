#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int vet[n], comprimento_atual = 1, comprimento_maior = 1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < n-1; i++)
    {
        if (vet[i+1] > vet[i])
        {
            comprimento_atual++;
        }
        else{
            comprimento_atual = 1;
        }  
        if (comprimento_atual > comprimento_maior)
        {
            comprimento_maior = comprimento_atual;
        }
    }
    
    printf("%d", comprimento_maior);
    return 0;
}