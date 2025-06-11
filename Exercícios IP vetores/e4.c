#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);

    float vetor[n],termo, somatorio = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &vetor[i]);
    }

    for (int i = 0; i < (n/2); i++)
    {
        termo = pow((vetor[i] - vetor[n-1-i]), 3);
        somatorio += termo;
    }
    
    printf("%.2f", somatorio);
    return 0;
}