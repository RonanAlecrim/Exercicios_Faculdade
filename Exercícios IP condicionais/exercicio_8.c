#include <stdio.h>
#include <math.h>

int main(){

    float vendas_brutas, salario_final;
    
    scanf("%f", &vendas_brutas);

    if (vendas_brutas > 15000)
    {
        salario_final = 500 + 0.09*vendas_brutas + 800;
    }else{

        salario_final = 500 + 0.09*vendas_brutas;
    }
    
    printf("%f", salario_final);

    return 0;
}