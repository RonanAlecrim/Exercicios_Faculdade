#include <stdio.h>
#include <math.h>

int main(){

    int ano;

    scanf("%d", &ano);

    if (ano % 100 == 0){
        if (ano % 400 == 0)
        {
            printf("Bissexto");
        }
        else{
            printf("Nao bissexto");
        }
        

    }else if (ano % 4 == 0)
    {
        printf("Bissexto");
    }
    
    else{
        printf("Nao bissexto");
    }

    return 0;
    
}