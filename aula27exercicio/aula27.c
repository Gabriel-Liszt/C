#include <stdio.h> 

int main(){

    float VetorMedia[4];
    float TabelaNotas[4][4];
    float media = 0;

    printf("Digite as quatro notas do aluno 1\n");

    for(int aluno = 0; aluno <= 3; aluno++)
    {
        for(int nota = 0; nota <=3; ++nota)
        {
            scanf("%f", &TabelaNotas[aluno][nota]);
            media += TabelaNotas[aluno][nota];
        }
        
        VetorMedia[aluno] = media / 4;
        media = 0;

        printf("Insira as notas do aluno %i\n", aluno + 2);

    }

    for(int aluno = 0; aluno <= 3; aluno++)
    {
        printf("A media do aluno %i eh %f\n", aluno + 1, VetorMedia[aluno]);
    }


    return 0;
}
