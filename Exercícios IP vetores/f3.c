#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int matriz[n][m];
    int resultado[100][100];
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            int soma = 0;
            int k, l;
            for (k = i - 1; k <= i + 1; k++) {
                for (l = j - 1; l <= j + 1; l++) {
                    if (k >= 0 && k < n && l >= 0 && l < m) {
                        if (k != i || l != j) {
                            soma += matriz[k][l];
                        }
                    }
                }
            }
            resultado[i][j] = soma;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d", resultado[i][j]);
            if (j < m - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}