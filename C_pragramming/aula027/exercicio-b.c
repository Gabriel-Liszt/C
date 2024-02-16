#include <stdio.h>

int main(){

    float MatrizNota[4][4];
    float MediaAluno[4];

    float media = 0;

    printf("Insira as 4 notas do aluno 1 ");


    // i = n alunos
    // j = notas do aluno
    for(int i = 0; i <= 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            scanf("%f", &MatrizNota[i][j]);
            media += MatrizNota[i][j];
        }
        MediaAluno[4] = media / 4;
        media = 0;
        printf("Insira as 4 notas do aluno %i: ", i + 2);
    }

    for(int k = 0; k < 4; k++)
    {
        printf("\nA media do aluno %i eh %.2f\n", k + 1, MediaAluno[k]);
    }


    return 0;
}