#include <stdio.h>
#include <math.h>

int main(){

    float A, B ,C, delta, raiz1, raiz2;

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    if (A == 0)
    {
        printf ("Nao e equacao do segundo grau\n");
    }else
    {
        delta = pow(B, 2) - (4*A*C);
        if (delta >= 0)
        {
            raiz1 = (-B + sqrt(delta))/(2*A);
            raiz2 = (-B - sqrt(delta))/(2*A);
            printf("%f %f", raiz1, raiz2);
        }else{
            printf("Nao ha raizes reais\n");
        }
        
    }
    
   return 0; 


}