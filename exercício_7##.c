#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

// geram um n�mero aleat�rio entre n1 e n2 informados pelo usu�rio

int main(){

    int n1, n2, random;
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));

    printf("Informe o primeiro n�mero: ");
    scanf("%d", &n1);

    printf("Informe o segundo n�mero: ");
    scanf("%d", &n2);
    
    random = n1 + rand() % (n2 - n1);

    printf("%d", random);

    return 0;

}