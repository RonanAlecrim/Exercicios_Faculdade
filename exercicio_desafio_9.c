#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

// calculando a media de um aluno com pesos

int main(){

    float prova1, prova2, prova3, trab1, trab2;
    float media_provas, media_trab, media_final;

    setlocale(LC_ALL, "Portuguese");

    printf("Informe a nota da primeira prova: ");
    scanf("%f", &prova1);

    printf("Informe a nota da segunda prova: ");
    scanf("%f", &prova2);

    printf("Informe a nota da terceira prova: ");
    scanf("%f", &prova3);

    printf("Informe a nota do primeiro trabalho: ");
    scanf("%f", &trab1);

    printf("Informe a nota do segundo trabalho: ");
    scanf("%f", &trab2);

    media_provas = (prova1 + prova2 + prova3) / 3;
    media_trab = (trab1 + trab2) / 2;
    media_final = (media_provas*0.6 + media_trab*0.4);

    printf ("Média Final da disciplina: %.2f", media_final);

    return 0;
}
