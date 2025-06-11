#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int matriz[n][n];
    int rotacionada[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rotacionada[j][n - 1 - i] = matriz[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", rotacionada[i][j]);
            
        }
        printf("\n");
    }

    return 0;
}