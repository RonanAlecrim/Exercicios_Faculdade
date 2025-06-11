#include <stdio.h>
#include <math.h>

int main(){

    int num_conta;
    float limite_credito, saldo_inicial, depositos, retiradas, saldo;

    scanf("%d", &num_conta);
    scanf("%f", &limite_credito);
    scanf("%f", &saldo_inicial);
    scanf("%f", &depositos);
    scanf("%f", &retiradas);

    saldo = saldo_inicial + depositos - retiradas;

    if (saldo > limite_credito)
    {
        printf("Credito excedido: %f", saldo);
    }else{

        printf("Saldo: %f", saldo);

    }
    
    return 0;

}