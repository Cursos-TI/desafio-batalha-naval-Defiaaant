#include <stdio.h>

int main() {

    //Declaração da matriz
    long int tabuleiro [10] [10] = {
        //Ampliação da matriz para 100 casas
        {3, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 3, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 3, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 3, 0, 3, 3, 3, 3, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 3},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 3},
        {0, 0, 0, 0, 0, 3, 0, 0, 0, 3},
        {0, 0, 0, 0, 3, 0, 0, 0, 0, 3},
        {0, 0, 0, 3, 0, 0, 0, 0, 0, 0},
        {0, 0, 3, 0, 0, 0, 0, 0, 0, 0}
    };
    char letra  = 'A';
    int numero = 1;

    printf("===== BATALHA NAVAL =====\n");
    //Início da matriz da batalha naval
    printf("    ");
    //Coordenada em x
    while (numero < 11){
        //incremento do espaço de análise
        printf("%d ", numero);
        numero++;
    }
    printf("\n");
        //Coordenada em y
    for (int i = 0; i < 10; i++){
        //incremento do espaço de análise
        printf(" %c| ", letra);
        ++letra;
        //Estrutura da matriz contendo os navios
        for (int j = 0; j < 10; j++){
        //incremento do espaço de análise
            printf("%ld ", tabuleiro[i][j]);
        }
        printf("\n");
        //Fim da matriz
    }
    
    /* partes contidas previamente no código
    Instruções do nível novato e aventureiro excluídas.
 
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