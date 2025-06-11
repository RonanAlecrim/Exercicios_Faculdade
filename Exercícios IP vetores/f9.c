#include <stdio.h>

int main() {
    int n, m;

    scanf("%d %d", &n, &m);
    
    int matriz_A[n][m];
    int filtro_F[3][3];
   
    int matriz_C[n - 2][m - 2];

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matriz_A[i][j]);
        }
    }

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &filtro_F[i][j]);
        }
    }

    for (int i = 1; i <= n - 2; i++) {
        for (int j = 1; j <= m - 2; j++) {
            
            int soma_convolucao = 0;

            
            for (int di = -1; di <= 1; di++) {
                for (int dj = -1; dj <= 1; dj++) {
                    
                    int valor_A = matriz_A[i + di][j + dj];

                    
                    int valor_F = filtro_F[di + 1][dj + 1];

                    
                    soma_convolucao += valor_A * valor_F;
                }
            }
            
            matriz_C[i - 1][j - 1] = soma_convolucao;
        }
    }
    
    for (int i = 0; i < n - 2; i++) {
        for (int j = 0; j < m - 2; j++) {
            printf("%d", matriz_C[i][j]);
            
            if (j < m - 3) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}