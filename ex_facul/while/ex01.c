#include <stdio.h>

int main(){

    int numrep, num1, num2, soma, media, neg = 0;
    
    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    if(num1 == 0 && num2 == 0){
        printf("Processo terminado");
    }else{
        soma = num1 + num2;
        media = soma / 2;

        printf("O resultado da soma entre os numeros eh: %d\n", soma);
        printf("A media dos numeros eh: %d\n", media);

        if(num1 > num2){
            printf("%d eh maior que %d\n", num1, num2);
        }else{
            printf("%d eh maior que %d\n", num2, num1);
        }

        if(num1 < 0 && num2 < 0){
            neg += 2;
            printf("numeros negativos: %d\n", neg);
        }else if(num1 < 0){
            neg += 1;
            printf("numeros negativos: %d\n", neg);
        }else if(num2 < 0){
            neg += 1;
            printf("numeros negativos: %d\n", neg);
        }else{
            printf("numeros negativos: %d\n", neg);
        }
    }

    printf("\n");
    printf("Digite outro numero: ");
    scanf("%d", &numrep);
    
    if(numrep == 0){
        printf("Processo terminado");
    }

    while(numrep != 0){
        
        soma = soma + numrep;
        media = soma / 2;

        printf("O resultado da soma entre os numeros eh: %d\n", soma);
        printf("A media dos numeros eh: %d\n", media);

        if(soma > numrep){
            printf("%d eh maior que %d\n", soma, numrep);
        }else{
            printf("%d eh maior que %d\n", numrep, soma);
        }

        if(num1 < 0 && num2 < 0){
            neg += 2;
            printf("numeros negativos: %d\n", neg);
        }else if(num1 < 0 && num2 != 0 ){
            neg += 1;
            printf("numeros negativos: %d\n", neg);
        }else{
            neg += 1;
            printf("numeros negativos: %d\n", neg);
        }

        printf("\n");
        printf("Digite outro numero: ");
        scanf("%d", &numrep);
        
        if(numrep == 0){
        printf("Processo terminado");
        }
    }


    return 0;
}