#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int vetA[n], vetB[n], vetmult[n], soma = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetA[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetB[i]);
    }

    for (int i = 0; i < n; i++)
    {
        vetmult[i] = vetA[i] * vetB[i];
        soma += vetmult[i];
    }
    
    printf("%d", soma);
    return 0;
    
}