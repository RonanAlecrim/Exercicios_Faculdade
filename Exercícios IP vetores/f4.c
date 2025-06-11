#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d", &n, &m);

    int matriz[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int crescente_linhas = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m-1; j++)
        {
            if (matriz[i][j] > matriz[i][j+1])
            {
                crescente_linhas = 0;
                break; 
            }
            
        }
        
        if (!crescente_linhas)
        {
            break;
        }
        
    }

    int crescente_colunas = 1;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (matriz[j][i] > matriz[j+1][i])
            {
                crescente_colunas = 0;
                break;
            }
            
        }
        
        if (!crescente_colunas)
        {
            break;
        }
        
        
    }
    
    if (crescente_linhas && crescente_colunas)
    {
        printf("SIM");
    }
    else{
        printf("NAO");
    }
    
    
    return 0;
}