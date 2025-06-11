#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int matriz[n][m]; float maiores_linhas[m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int maior_linha = matriz[i][0];
            if (matriz[i][j] >= maior_linha)
            {
                maior_linha = matriz[i][j];
                maiores_linhas[i] = maior_linha;
            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            float normalizado = matriz[i][j]/maiores_linhas[i];
            printf("%f ", normalizado);
        }
        printf("\n");
    }
    
    return 0;
}