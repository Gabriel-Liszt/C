#include <stdio.h>

int main(){

    int senha = 123456;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    if(senha == 123456){
        printf("Senha correta");
    }

    while(senha != 123456){
        printf("Senha incorreta\n"
               "Digite novamente sua senha: \n");
        scanf("%d", &senha);    
    }

    printf("Senha correta");

    return 0;
}