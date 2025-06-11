#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int vetor[n], vetor2[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (n == 1)
        {
            vetor2[i] = 0;
            printf("%d ", vetor2[i]);
        }
        
        else{
            if (i == 0)
            {
                vetor2[i] = vetor[i+1];
            }

            else if (i == n-1)
            {
                vetor2[n-1] = vetor [n-2];
            }
            
            else{
                vetor2[i] = vetor[i-1] + vetor[i+1];
            }
            
            printf("%d ", vetor2[i]);
        }
    }
    return 0;
}