#include <stdio.h>
#include <math.h>

int main(){

    int n1, n2, soma, raiz, op;

    printf("Menu de opcoes: \n"
           "1 - Somar dois numeros;\n"
           "2 - Raiz quadrada de um numero\n"
           "Digite a opcao desejada: ");
    scanf("%d", &op);
    
    if(op != 1 && op != 2){
        printf("[ERRO]  -> escolha a opcao 1 ou 2");
    }else{
        if(op == 1){
            printf("Digite os dois numeros: ");
            scanf("%d %d", &n1, &n2);
            soma = n1 + n2;
            printf("A soma entre dois numeros eh %d", soma);
        }else{
            printf("Digite o numero que vc quer saber a raiz: ");
            scanf("%d", &n1);
            raiz = sqrt(n1);
            printf("A raiz de %d eh: %d", n1, raiz);
        }
    }
 
    return 0;
}