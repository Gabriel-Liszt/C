#include <stdio.h>
#include <string.h>
#define MAX 50

int main(){

    int x;
    char str[] = "Brasil", str2[MAX];

    x = strlen(str);
    printf("%d\n", x - 1);

    strcpy(str2, str);

    puts(str2);

    strcat(str2, str);

    puts(str2);
    

    return 0;
}