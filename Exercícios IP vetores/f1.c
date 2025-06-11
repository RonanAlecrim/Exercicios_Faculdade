#include <stdio.h>

int main(){
    int linhas, colunas;
    scanf("%d %d", &linhas, &colunas);

    int matriz[linhas][colunas], transposta[colunas][linhas];

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
        
    }

    for (int i = 0; i < colunas; i++)
    {
        for (int j = 0; j < linhas; j++)
        {
            transposta[i][j] = matriz[j][i];
        }
        
    }
    
    for (int i = 0; i < colunas; i++)
    {
        for (int j = 0; j < linhas; j++)
        {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}