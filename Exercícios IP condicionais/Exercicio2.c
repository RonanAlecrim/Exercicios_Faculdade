#include <stdio.h>
#include <math.h>

int main(){

    int N;
    
    scanf("%d", &N);

    if (N % 2 == 0)
    {
        printf("%d Par", N);
    }else{
        printf("%d Impar", N);
    }

    return 0;
    
}