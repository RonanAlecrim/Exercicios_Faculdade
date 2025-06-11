#include <stdio.h>
#include <math.h>

int main(){

    int i, j;

    for ( i = 0; i <= 10; i++)
    {

        printf("\nTABUADA DE: %d\n\n", i);
        for (j = 0; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        
        
    }
 
    return 0;
}