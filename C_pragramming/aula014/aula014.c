#include <stdio.h>

int main(){

    float idade;

    printf("Digite aqui a sua idade\n");
    scanf("%f", &idade);

    if(idade < 12){
        printf("Você é uma criança");
    } else if (idade >= 12 && idade < 18){
    	printf("Você é um adolescente");
    } else if(idade >= 18){
        printf("Você é um adulto");
    } else {
        printf("ERROR");
    }
    
    return 0;
}