#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int vet[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (vet[j] > vet[j+1])
            {
                int aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
            
        }
    }
    
    for (int i = 0;i < n;i++)
    {
        printf("%d ", vet[i]);
    }
    return 0;
}