#include <stdio.h>

void maior(int A, int B, int C){

    printf("O endereco de A eh: %d\n ", (void *)&A);
    printf("O endereco de B eh: %d\n ", (void *)&B);
    printf("O endereco de C eh: %d\n ", (void *)&C);

    if(&C > &B && &C > &A){
        printf(" end C %d, valor de C: %d", (void *)&C, C);
    }else if(&B > &A && &B > &C){
        printf(" end B %d, valor de B: %d", (void *)&B, B);
    }else{
        printf(" end A %d, valor de C: %d", (void *)&A, A);
    }

}

int main(){
    int A = 30, B = 15, C = 20;

    maior(A, B, C);


    return 0;
}