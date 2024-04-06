/*#include <stdio.h>

int vetor(int vetor[], int n){

    int novo, soma = 0;

    for(int i = 0; i < n; i++){
        soma += vetor[i];
    }


    return soma;
}

int main(){

    int i, ve[10], soma;

    for(int j = 0; j < 10; j++){
        scanf("%d", &ve[j]);
    }

    soma = vetor(ve, 10);

    printf("%d", soma);

    return 0;
}
*/

/*
Elabore um programa contendo uma função que receba as três notas de um aluno como parâmetro e uma letra. Se a letra for A, calcular a média aritmética das notas do aluno; se a letra for P, deverá calcular a média ponderada, com pesos 5, 3 e 2. A média calculada
deverá ser devolvida ao programa principal para, então, ser mostrada.
*/

#include <stdio.h>

#include <locale.h>

int notaAluno(int vetor[], int n, char op){

    int soma = 0, zero = 0;
    float mediaA, mediaP;

    for (int i = 0; i < 3 ; i++){
        soma += vetor[i];
    }  

    if(op == 'A'){
        mediaA = soma / 4;

        return mediaA;
    }else if(op == 'B'){
        mediaP = ((vetor[0] * 5) + (vetor[1]*3) + (vetor[2]*2))/(5 + 3 + 2);
        return mediaP;
    }else{
       return zero; 
    }
}

int main(){

    int vetor[3];
    float media;
    char n;
    setlocale(LC_ALL, "Portuguese");
    for(int i = 0; i < 3; i++){
        scanf("%d", &vetor[i]);
    }

    printf("Digite a opcao A ou B");
    scanf(" %c", &n);

    media = notaAluno(vetor, 3, n);

    printf("%2.f", media);

    return 0;
}