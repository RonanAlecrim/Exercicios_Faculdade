#include <stdio.h>
#include <math.h>

int main(){

    float A, B ,C, delta, raiz1, raiz2;

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    delta = pow(B, 2) - (4*A*C);

    if (delta >= 0 && A != 0)
    {
        raiz1 = (-B + sqrt(delta))/(2*A);
        raiz2 = (-B - sqrt(delta))/(2*A);
        printf("%f %f", raiz1, raiz2);
    }else if (delta < 0 && A != 0)
    {
        printf("Nao ha raizes reais");
    }else if (A == 0)
    {
        printf ("Nao e equacacao do segundo grau");
    }
    
    
    
    
   return 0; 


}