 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

void gerarmatriz(int matriz[][10]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            matriz[i][j] = rand() % 100;
        }
    }
}

 int main(){
    srand(time(NULL));

    return 0;
 }