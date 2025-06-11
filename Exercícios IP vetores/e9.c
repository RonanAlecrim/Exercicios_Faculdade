#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int vetor[n], vetor_soma[n], soma = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }


   for (int i = 0; i < n; i++)
   {
        soma += vetor[i];
        vetor_soma[i] = soma;
   }
   
   for (int i = 0; i < n; i++)
   {
        printf("%d ", vetor_soma[i]);
   }
   
   return 0;
    
}