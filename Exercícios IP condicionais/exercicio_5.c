#include <stdio.h>
#include <math.h>

int main(){

    float n1, n2, n3, media;
    int faltas;

    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%d", &faltas);

    media = (n1+n2+n3)/3;

    if (faltas > 16)
    {
        printf("Reprovado por falta");
    }else if (media >= 7)
    {
        printf("Aprovado");
    }else if (media >= 5 && media < 7)
    {
        printf("Prova final");
    }else if(media < 5)
    {
        printf("Reprovado");
    }
    
    return 0;
    
}