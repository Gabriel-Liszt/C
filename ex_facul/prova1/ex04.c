#include <stdio.h>

int main(){

    int m, x, y;

    scanf("%d", &x);
    y = 0;
    m = 1;
    while(x > 0){
        y = y + (x % 2) * m;
        x = x / 2;
        m = m * 10;
    }

    printf("%d", y);

    return 0;
}