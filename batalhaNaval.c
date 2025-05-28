#include <stdio.h>

//Referências das dimensões das matrizes
#define COLUNA 10
#define LINHA 10
#define COLUNA2 5
#define LINHA2 3

int main() {
    //Declaração da matriz
    long int tabuleiro [LINHA] [COLUNA] = {
        //Ampliação da matriz para 100 casas
        //Algarismo 3 representa os navios no tabuleiro
        //Algarismos 1, 2 e 5 representam os centros de habilidade
        {0, 3, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 3, 0, 0, 5, 0, 0, 3, 0, 0},
        {0, 3, 0, 0, 0, 0, 0, 3, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 3, 0, 0},
        {0, 0, 3, 3, 3, 0, 0, 0, 0, 3},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 3},
        {0, 0, 0, 0, 0, 3, 3, 3, 0, 3},
        {0, 0, 7, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
    int VALOR_AGUA = 0, VALOR_NAVIO = 3, VALOR_HAB_CRUZ = 5, VALOR_HAB_CONE = 1, VALOR_HAB_OCTAEDRO = 7; //Caracteres para cada matriz
    int matrizCruz [LINHA2][COLUNA2] = {{0, 0, 1, 0, 0}, {1, 1, 1, 1, 1}, {0, 0, 1, 0, 0}}; //Matriz do padrão "cruz"
    int matrizOctaedro [LINHA2][COLUNA2] = {{0, 0, 1, 0, 0}, {0, 1, 1, 1, 0}, {0, 0, 1, 0, 0}}; //Matriz do padrão "octaedro"
    int matrizCone [LINHA2][COLUNA2] = {{0, 0, 1, 0, 0}, {0, 1, 1, 1, 0}, {1, 1, 1, 1, 1}}; //Matriz do padrão "cone"

    
    char letra  = 'A'; // Variável para coordenadas em y
    int numero = 1; // Variável para coordenadas em x

    printf("===== BATALHA NAVAL =====\n");
    //Início da matriz da batalha naval
    printf("    ");

    //Coordenada em x
    while (numero <= COLUNA){
        //incremento do espaço de análise
        printf("%d ", numero);
        numero++;
    }
    printf("\n");
    //Demarcação das origens dos espaços de exibição
    int origem_L_cruz = 1, origem_L_cone = 8, origem_L_octaedro = 7;
    int origem_C_cruz = 4, origem_C_cone = 5, origem_C_octaedro = 2;
            
    int centro_hab_linha = 1; 
    int centro_hab_coluna = 2;

    //Designado à exibição da matriz em cruz na deimitação
    for (int i_h = 0; i_h < LINHA2; i_h++) { 
        for (int j_h = 0; j_h < COLUNA2; j_h++) { 
            if (matrizCruz[i_h][j_h] == 1) {
                int tab_linha = origem_L_cruz + (i_h - centro_hab_linha);
                int tab_coluna = origem_C_cruz + (j_h - centro_hab_coluna);

                // Verificação de limites
                if (tab_linha >= 0 && tab_linha < LINHA && tab_coluna >= 0 && tab_coluna < COLUNA) {
                    // Evitar sobrescrever navios
                    if (tabuleiro[tab_linha][tab_coluna] == VALOR_AGUA) {
                        tabuleiro[tab_linha][tab_coluna] = VALOR_HAB_CRUZ;
                    }
                }
            }
        }
    }
            //Designado à exibição da matriz em cone na deimitação
    for (int i_h = 0; i_h < LINHA2; i_h++) { 
        for (int j_h = 0; j_h < COLUNA2; j_h++) { 
            if (matrizCone[i_h][j_h] == 1) {
                int tab_linha = origem_L_cone + (i_h - centro_hab_linha);
                int tab_coluna = origem_C_cone + (j_h - centro_hab_coluna);

                // Verificação dos limites
                if (tab_linha >= 0 && tab_linha < LINHA && tab_coluna >= 0 && tab_coluna < COLUNA) {
                    // Evitar sobrescrever navios
                    if (tabuleiro[tab_linha][tab_coluna] == VALOR_AGUA) {
                        tabuleiro[tab_linha][tab_coluna] = VALOR_HAB_CONE;
                    }
                }
            }
        }
    }
    //Designado à exibição da matriz em forma de octaedro na deimitação
    for (int i_h = 0; i_h < LINHA2; i_h++) { 
        for (int j_h = 0; j_h < COLUNA2; j_h++) { 
            if (matrizOctaedro[i_h][j_h] == 1) {
                int tab_linha = origem_L_octaedro + (i_h - centro_hab_linha);
                int tab_coluna = origem_C_octaedro + (j_h - centro_hab_coluna);

                // Verificação dos limites
                if (tab_linha >= 0 && tab_linha < LINHA && tab_coluna >= 0 && tab_coluna < COLUNA) {
                    // Evitar sobrescrever navios
                    if (tabuleiro[tab_linha][tab_coluna] == VALOR_AGUA) {
                        tabuleiro[tab_linha][tab_coluna] = VALOR_HAB_OCTAEDRO;
                    }
                }
            }
        }
    }

    for (int i = 0; i < LINHA; i++){
        //incremento do espaço de análise
        printf(" %c| ", letra);
        //incremento do espaço de análise
        ++letra;
        //Estrutura da matriz contendo os navios
        for (int j = 0; j < COLUNA; j++){
           printf("%ld ", tabuleiro [i][j]);
        }
        printf("\n");
    }

    /* Exibição desejada:
    ===== BATALHA NAVAL =====
        1 2 3 4 5 6 7 8 9 10 
     A| 0 3 0 0 5 0 0 0 0 0 
     B| 0 3 5 5 5 5 5 3 0 0 
     C| 0 3 0 0 5 0 0 3 0 0 
     D| 0 0 0 0 0 0 0 3 0 0
     E| 0 0 3 3 3 0 0 0 0 3 
     F| 0 0 0 0 0 0 0 0 0 3 
     G| 0 0 7 0 0 3 3 3 0 3
     H| 0 7 7 7 0 1 0 0 0 0 
     I| 0 0 7 0 1 1 1 0 0 0
     J| 0 0 0 1 1 1 1 1 0 0

    */

        //Fim da matriz
    return 0;
}