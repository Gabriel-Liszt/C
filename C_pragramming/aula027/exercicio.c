#include <stdio.h>


int main(){

    const int NumeroDeAlunos = 4;
    const int NumeroDeBimestres = 4;

    float NotaAluno[NumeroDeAlunos][NumeroDeBimestres];
    float mediasAluno[NumeroDeAlunos];

    float media = 0;

    printf("Insira as 4 notas do aluno 1 ");

    for(int aluno = 0; aluno < NumeroDeAlunos; aluno++){
        for(int notas = 0; notas < NumeroDeBimestres; notas++){
            scanf("%f", &NotaAluno[aluno][notas]);
            media += NotaAluno[aluno][notas];
        }
        mediasAluno[NumeroDeAlunos] = media / NumeroDeBimestres;
        media = 0;
        printf("Insira as 4 notas do aluno %i:\n ", aluno + 2);
    }

   for(int aluno = 0; aluno < NumeroDeAlunos; ++aluno){
    printf("A media do aluno %i eh %.2f\n", aluno + 1, mediasAluno[aluno]);
   }


    return 0;
}