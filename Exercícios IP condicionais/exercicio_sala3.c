#include <stdio.h>

int main(){

    int i, n;

    printf("Informe um numero: ");
    scanf("%d", &n);

    printf("Divisores de %d: ", n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
        
    }

    return 0;
    
}