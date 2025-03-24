#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

// geram um número aleatório entre n1 e n2 informados pelo usuário

int main(){

    int n1, n2, random;
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));

    printf("Informe o primeiro número: ");
    scanf("%d", &n1);

    printf("Informe o segundo número: ");
    scanf("%d", &n2);
    
    random = n1 + rand() % (n2 - n1);

    printf("%d", random);

    return 0;

}