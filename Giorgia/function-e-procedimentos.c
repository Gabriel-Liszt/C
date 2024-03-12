#include <stdio.h>

int maior(float num1, float num2){

    if(num1 > num2){
        return num1;
    }else{
        return num2;
    }

} 

int main(){

    float x, y, m;

    do{
    scanf("%f", &x);
    scanf("%f", &y);
    m = maior(x, y);
    printf("Maior : %.2f", m);
    }while(x != 0 && y != 0);

    return 0;
}

