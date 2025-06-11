#include <stdio.h>
#include <math.h>

int main(){

    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);

    if (X + Y <= Z || X + Z <= Y || Y + Z <= X)
    {
        printf("Nao forma triangulo\n");
    }else if (X == Y && Y == Z)
    {
        printf("Equilatero\n");
    }else if (X == Y || X == Z ||Y == Z)
    {
        printf("Isosceles\n");
    }else if (X != Y && X != Z && Y != Z)
    {
        printf("Escaleno\n");
    }
    
    
    return 0;
    
}