#include <stdio.h>

int main() {

    //Declaração da matriz
    int tabuleiro [5] [5] = {
        {0, 0, 0, 0, 0},
        {0, 3, 0, 0, 0},
        {0, 3, 0, 0, 0},
        {0, 0, 3, 3, 3},
        {0, 0, 0, 0, 0}
    };
    char letra  = 'A';
    int numero = 1;

    printf("===== BATALHA NAVAL =====\n");
    //Início da matriz da batalha naval
    printf("    ");
    //Coordenada em x
    while (numero < 6){
        printf("%d ", numero);
        numero++;
    }
    printf("\n");
    for (int i = 0; i < 5; i++){
        //Coordenada em y
        printf(" %c| ", letra);
        ++letra;
        //Estrutura da matriz contendo os navios
        for (int j = 0; j < 5; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
        //Fim da matriz
    }
    
    /* partes contidas previamente no código

    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
    */
    return 0;
}