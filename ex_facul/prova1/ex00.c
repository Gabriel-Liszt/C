#include <stdio.h>

int main(){

    int cod;
    float salario, aumento;

    printf("Digite o codigo respectivo para cada cargo: \n"
           "1 -> Escrituario\n"
           "2 -> Secretario\n"
           "3 -> Caixa\n"
           "4 -> Gerente\n"
           "5 -> Diretor\n"
           "0 -> Encerrar programa\n");
    scanf("%d", &cod);

    if(cod == 0){
        printf("programa encerrado");
    }else{
       switch(cod){
        case 1:
        printf("Digite o salario: ");
        scanf("%f", &salario);
        aumento = salario * 1.50;
        printf("Seu novo salario será: %.2f", aumento);
        break;
        case 2:
        printf("Digite o salário: ");
        scanf("%f", &salario);
        aumento = salario * 1.35;
        printf("Seu novo salario sera : %.2f", aumento);
        break;
        case 3:
        printf("Digite o salario: ");
        scanf("%f", &salario);
        aumento = salario * 1.20;
        break;
        case 4:
        printf("Digite o salario");
        scanf("%f", &salario);
        aumento = salario * 1.10;
        break;
        case 5:
        printf("Digite o salario: ");
        scanf("%f", &salario);
        printf("Diretores nao possuem aumento, seu salario continua %.2f", salario);
      } 
    }

    return 0;
}