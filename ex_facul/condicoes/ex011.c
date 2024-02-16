#include <stdio.h>

int main(){

    int cod;
    float porcento, salario_atual, novo_salario;

    printf("Escreva o codigo correspondente ao cargo de um funcionario" "e o salario atual: ");
    scanf("%d %f", &cod, &salario_atual);

    if(cod < 1 || cod > 5){
        printf("Digite apenas numeros entre 1 e 5.");
    }else if(cod == 1){
        porcento = salario_atual * 0.50;
        novo_salario = salario_atual + porcento;
        printf("Seu cargo eh: Escrituario\n"
        "Seu salario eh: %.2f\n"
        "Depois do aumento seu novo salario eh: %.2f", salario_atual, novo_salario);
    }else if(cod == 2){
        porcento = salario_atual * 0.35;
        novo_salario = salario_atual + porcento;
        printf("Seu cargo eh: Secretario\n"
        "Seu salario eh: %.2f\n"
        "Depois do aumento seu novo salario eh: %.2f", salario_atual, novo_salario);
    }else if(cod == 3){
        porcento = salario_atual * 0.20;
        novo_salario = salario_atual + porcento;
        printf("Seu cargo eh: Caixa\n"
        "Seu salario eh: %.2f\n"
        "Depois do aumento seu novo salario eh: %.2f", salario_atual, novo_salario);
    }else if(cod == 4){
        porcento = salario_atual * 0.10;
        novo_salario = salario_atual + porcento;
        printf("Seu cargo eh: Gerente\n"
        "Seu salario eh: %.2f\n"
        "Depois do aumento seu novo salario eh: %.2f", salario_atual, novo_salario);
    }else{
        printf("Seu cargo eh: Diretor\n"
        "Seu salario eh: %.2f\n"
        "Depois do aumento seu novo salario eh: Voce nao tem aumento", salario_atual);
    }


    return 0;
}