/*
Faça um programa que leia o código, a descrição, o valor unitário e a
quantidade em estoque de 10 produtos comercializados em uma papelaria.
Estas informações deverão ser armazenadas em um vetor de estruturas.
Depois da leitura dos dados de entrada, o programa deverá:

• Realizar uma rotina que permita alterar a descrição, o valor unitário e a
quantidade em estoque de determinado produto, que deverá ser
localizado por meio do seu código;

• Realizar uma rotina que mostre todos os produtos cuja descrição
comece com determinada letra (informada pelo usuário);

• Mostrar todos os produtos com quantidade em estoque inferior a 5
unidades.
*/

#include <stdio.h>
#include <string.h>

#define max 100

struct mercado{
    int codigo;
    char descricao[max];
    float valor;
    int quantidade;
}produtos[10];

void lerprodutos(struct mercado produtos[]){
    for(int i = 0; i < 10; i++){
        printf("Digite o nome do produto:\n");
        scanf("%s", produtos[i].descricao);

        printf("Digite seu codigo:\n");
        scanf("%d", &produtos[i].codigo);

        printf("Digite seu valor:\n");
        scanf("%f", &produtos[i].valor);

        printf("Digite a quantidade do produto:\n");
        scanf("%d", &produtos[i].quantidade);
    }
}

void rotina(struct mercado produtos[]){

    int c;
    printf("Digite o codigo do produto que deseja alterar");
    scanf("%d", &c);

    for(int i = 0; i < 10; i++){
        if(c == produtos[i].codigo){

            printf("Alterar valor: \n");
            scanf("%f", &produtos[i].valor);

            printf("Aleterar quantidade em estoque: \n");
            scanf("%d", &produtos[i].quantidade);
        }
    }
}

void achaprodutos(struct mercado produtos[]){
    char letra;

    printf("Digite a letra");
    scanf("%c", &letra);

    for(int i = 0; i < 10; i++){
        if(letra == produtos[i].descricao[0]){
            printf("produto:\n");
            puts(produtos[i].descricao);
    }
}
    
}

void inferiora5(struct mercado produtos[]){

    for(int i = 0; i < 10; i++){
        if(produtos[i].quantidade < 5){
            printf("O produto de codigo %d, possui %d unidades.\n", produtos[i].codigo, produtos[i].quantidade);
        }

    }

}

int main(){

    lerprodutos(produtos);
    rotina(produtos);
    //acharprodutos(produtos);
    inferiora5(produtos);

    return 0;
}

