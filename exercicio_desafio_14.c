#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

//calculando quantos dias um aluno ainda pode faltar em uma disciplina de 128 horas

int main(){

    int horas_totais = 128, faltas, horas_faltadas, faltas_possiveis;

    printf("Informe quantos dias faltou: ");
    scanf("%d", &faltas);

    horas_faltadas = faltas*2;
    faltas_possiveis = ((0.25*horas_totais) - horas_faltadas) / 2;

    printf("O aluno ainda pode faltar %d dias.", faltas_possiveis);

    return 0;
    
}