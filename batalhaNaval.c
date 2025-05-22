#include <stdio.h>

#define COLUNA 10
#define LINHA 10
#define COLUNA2 5
#define LINHA2 3

int main() {
    //Declaração da matriz
    long int tabuleiro [LINHA] [COLUNA] = {
        //Ampliação da matriz para 100 casas
        //Algarismo 3 representa os navios no tabuleiro
        //Algarismos 1, 2 e 4 marcam o início das linhas de habilidade.
        {0, 3, 1, 0, 0, 0, 0, 0, 0, 0},
        {0, 3, 1, 0, 0, 0, 0, 3, 0, 0},
        {0, 3, 1, 0, 0, 0, 0, 3, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 3, 0, 0},
        {0, 0, 3, 3, 3, 0, 0, 0, 0, 3},
        {4, 0, 0, 0, 0, 0, 0, 0, 0, 3},
        {4, 0, 0, 0, 0, 3, 3, 3, 0, 3},
        {4, 0, 0, 0, 0, 2, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 2, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 2, 0, 0, 0, 0}
    };
    //variáveis para a manutenção das matrizes menores
    int inicio, linha_origem, coluna_origem, i_hab = 0, j_hab = 0;

    //Matrizes de cada habilidade
    int matrizCruz [LINHA2][COLUNA2] = {{0, 0, 1, 0, 0}, {1, 1, 1, 1, 1}, {0, 0, 1, 0, 0}};
    int matrizCone [LINHA2][COLUNA2] = {{0, 0, 1, 0, 0}, {0, 1, 1, 1, 0}, {1, 1, 1, 1, 1}};
    int matrizOctaedro [LINHA2][COLUNA2] = {{0, 0, 1, 0, 0}, {0, 1, 1, 1, 0}, {0, 0, 1, 0, 0}};
    
    char letra  = 'A'; // Variável para coordenadas em y
    int numero = 1; // Variável para coordenadas em x

    printf("===== BATALHA NAVAL =====\n");
    //Início da matriz da batalha naval
    printf("    ");

    
    while (numero <= 10){
        printf("%d ", numero); //Coordenada em x
        numero++;
    }
    printf("\n");

    for (int i = 0; i < LINHA; i++){
        printf(" %c| ", letra); //Coordenadas em y
        ++letra;
        //Estrutura da matriz contendo os navios
        for (int j = 0; j < COLUNA; j++){
            inicio = tabuleiro [i][j];
            linha_origem = LINHA2, coluna_origem = COLUNA2;
            if (inicio == 1){ //Espaço de execução para a matriz em cruz
                for (j_hab = 0; j_hab < coluna_origem; j_hab++){
                        printf("%d ", matrizCruz [i_hab][j_hab]);    
                }
                j = j + 4;
                i_hab++;
                if (i_hab == 3){
                    i_hab = 0;
                }
            } else if (inicio == 2){ //Espaço de execução para a matriz em cone
                for (int j_hab = 0; j_hab < coluna_origem; j_hab++){
                    printf("%d ", matrizCone [i_hab][j_hab]);
                }
                j = j + 4;
                i_hab++; 
                if (i_hab == 3){
                    i_hab = 0;
                }
                
            } else if (inicio == 4){ //Espaço de execução para a matriz em forma de octaedro
                for (int j_hab = 0; j_hab < coluna_origem; j_hab++){
                    printf("%d ", matrizOctaedro [i_hab][j_hab]);
                } 
                j = j + 4;
                i_hab++;
                if (i_hab == 3){
                    i_hab = 0;
                }
            } else{ //Preenchimento geral (água e navios)
                printf("%ld ", tabuleiro [i][j]);
            }

        }
        printf("\n");

        /* Exibição desejada: 
    ===== BATALHA NAVAL =====
       1 2 3 4 5 6 7 8 9 10 
    A| 0 3 0 0 1 0 0 0 0 0 
    B| 0 3 1 1 1 1 1 3 0 0 
    C| 0 3 0 0 1 0 0 3 0 0 
    D| 0 0 0 0 0 0 0 3 0 0 
    E| 0 0 3 3 3 0 0 0 0 3 
    F| 0 0 1 0 0 0 0 0 0 3 
    G| 0 1 1 1 0 3 3 3 0 3 
    H| 0 0 1 0 0 0 0 1 0 0 
    I| 0 0 0 0 0 0 1 1 1 0 
    J| 0 0 0 0 0 1 1 1 1 1 
    */
    }
        //Fim da matriz
    return 0;
}