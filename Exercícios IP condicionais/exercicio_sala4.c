#include <stdio.h>

int main(){

    int i, n, soma_divisores=0;

    printf("Informe um numero: ");
    scanf("%d", &n);

    printf("Divisores de %d: ", n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
           soma_divisores += i;
        }   
        
    }

    if (soma_divisores == n)
    {
         printf("\nO numero e perfeito.");
    }else{
     printf("\nO numero nao e perfeito.");
    }
    

    return 0;
    
}