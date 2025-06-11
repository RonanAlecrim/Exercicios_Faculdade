#include <stdio.h>

int main(){
    int n, ver;
    scanf("%d", &n);
    
    int vet[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < n/2; i++)
    {
        if (vet[i] == vet[n-i-1])
        {
            ver = 1;
            continue;
        }else{
            ver = 0;
            break;
        }
        
    }
    
    if (ver)
    {
        printf("SIM");
    }
    else{
        printf("NAO");
    }
    
    return 0;
}
