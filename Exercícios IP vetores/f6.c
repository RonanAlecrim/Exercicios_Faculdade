#include <stdio.h>

int main(){
    int n,k,m;
    scanf("%d %d %d", &n, &k, &m);

    int matriz_A[n][k], matriz_B[k][m], matriz_C[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            scanf("%d", &matriz_A[i][j]);
        }
        
    }

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matriz_B[i][j]);
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matriz_C[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int l = 0; l < k; l++)
            {
                matriz_C[i][j] += matriz_A[i][l] * matriz_B[l][j];
            }
            
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", matriz_C[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}