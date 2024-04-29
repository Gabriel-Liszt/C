/*
Criar uma estrutura para receber os nomes de clubes de futebol e seus
respectivos pontos no campeonato. Ler os nomes e os pontos e mostrar
qual equipe (nome e pontos) é a vencedora. Considerar 10 clubes no total.






#include <stdio.h>
#include <string.h>
#define max 20
 
struct time{

    char nome[max];
    int pontos;

}timescamp[10], vencedor;

void defclubes(struct time times[], struct time vencedor){

    for(int i = 0; i < 10; i++){

        printf("Digite o nome do clube: \n");
        fgets(times[i].nome, 50, stdin);

        printf("Digite a pontuacao do clube: \n");
        scanf("%d", &times[i].pontos);
    }

    for(int i = 0; i < 10; i++){

        if(times[i].pontos < times [i + 1].pontos){
            vencedor = times[i+1];
        }
    }

    printf("O time vencedor foi: ");
    puts(vencedor.nome);
    printf("\nCom a pontuação de: %d", vencedor.pontos);
}

int main(){
    defclubes(timescamp, vencedor);
    return 0;
}
*/

#include <stdio.h>
#include <string.h>

// Definição da estrutura para representar um clube de futebol
struct Clube {
    char nome[50];
    int pontos;
};

// Função para ler os nomes e os pontos dos clubes, e determinar o vencedor
struct Clube determinarVencedor(struct Clube clubes[], int quantidade) {
    struct Clube vencedor = clubes[0];

    for (int i = 0; i < quantidade; i++) {
        printf("Digite o nome do clube %d: ", i + 1);
        scanf("%s", clubes[i].nome); // Lê o nome do clube
        
        printf("Digite os pontos do clube %d: ", i + 1);
        scanf("%d", &clubes[i].pontos); // Lê os pontos do clube

        if (clubes[i].pontos > vencedor.pontos) {
            vencedor = clubes[i];
        }
    }

    return vencedor;
}

int main() {
    const int quantidadeClubes = 10; // Número total de clubes
    struct Clube clubes[quantidadeClubes]; // Array para armazenar os clubes

    // Determinar o vencedor
    struct Clube vencedor = determinarVencedor(clubes, quantidadeClubes);

    // Exibir o vencedor
    printf("O vencedor do campeonato é: %s, com %d pontos.\n", vencedor.nome, vencedor.pontos);

    return 0;
}


