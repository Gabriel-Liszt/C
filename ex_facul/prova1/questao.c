#include <stdio.h>

int main(){

    int a, b, impa = 0, impb =0, ma, mb, soma;
    float media;

    scanf("%d %d", &a, &b);
    while(a == b){
        printf("os valores nao podem ser iguais, digite novos valores");
        scanf("%d %d", &a, &b);
    }

    if(a < b){
        for(int i = 1; i <= a; i++){
            if(i % 2 != 0){
                impa += i;
            }
        }
        for(int i = 1; i <= b; i++){
            if(i % 2 != 0){
                impb += i;
            }
        }
        soma = impa + impb;
        printf("A soma entre a e b eh: %d", soma);
    }else{
        for(int i = 1; i <= a; i++){
            ma = i * 3;
        }
        for(int i = 1; i <= a; i++){
            mb = i * 3;
        }
        media = (ma + mb) / 2;
        printf("a media eh %f", media);
    }


    return 0;
}