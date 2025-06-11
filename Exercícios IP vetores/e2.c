#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    float n_max = 0, n_min = 999, n_norm[n];

    float numeros[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &numeros[i]);

        if (numeros[i] > n_max)
        {
            n_max = numeros[i];
        }

        if (numeros[i] < n_min)
        {
            n_min = numeros[i];
        }
        
    }

    if (n_max == n_min) {
        for (int i = 0; i < n; i++) {
            printf("0.00 ");
        }
    }else{
        for(int i= 0; i < n; i++){
            n_norm[i] = (numeros[i] - n_min) / (n_max - n_min);
            printf("%.2f ", n_norm[i]);
        }
    } 

    return 0;

}