#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int matriz[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        int soma_linhas = 0;
        for (int j = 0; j < m; j++)
        {
            soma_linhas += matriz[i][j];
        }
        printf("%d ", soma_linhas);
    }

    printf("\n");

    for (int i = 0; i < m; i++)
    {
        int soma_colunas = 0;
        for (int j = 0; j < n; j++)
        {
            soma_colunas += matriz[j][i];
        }
        printf("%d ", soma_colunas);
    }


    return 0;
}