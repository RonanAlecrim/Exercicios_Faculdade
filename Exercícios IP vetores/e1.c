#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    float alturas[n], soma = 0, media;

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &alturas[i]);
        soma += alturas[i];
    }
    
    media = soma/n;

    for (int i = 0; i < n; i++)
    {
        if (alturas[i] > media)
        {
            printf("%.2f\n", alturas[i]);
        }
        
    }
    
    return 0;
}