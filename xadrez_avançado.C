#include <stdio.h>

// Constantes para o número de casas a mover
#define TORRE_CASAS 5
#define BISPO_VERTICAL 5
#define BISPO_HORIZONTAL 5
#define RAINHA_CASAS 8
#define CAVALO_MOVIMENTOS 3

// Função recursiva para mover a Torre para a direita
void moverTorreRecursivo(int casasRestantes) {
    if (casasRestantes <= 0) return;  // Caso base
    printf("Direita\n");
    moverTorreRecursivo(casasRestantes - 1);  // Chamada recursiva
}

// Função recursiva para mover a Rainha para a esquerda
void moverRainhaRecursivo(int casasRestantes) {
    if (casasRestantes <= 0) return;  // Caso base
    printf("Esquerda\n");
    moverRainhaRecursivo(casasRestantes - 1);  // Chamada recursiva
}

// Função recursiva para mover o Bispo com loops aninhados
// O loop externo controla o movimento vertical (cima)
// O loop interno controla o movimento horizontal (direita)
void moverBispoRecursivo(int casasVerticais, int casasHorizontais) {
    if (casasVerticais <= 0) return;  // Caso base da recursão vertical

    // Loop interno para movimento horizontal
    for (int i = 0; i < casasHorizontais; i++) {
        printf("Direita\n");
    }
    // Movimento vertical
    printf("Cima\n");

    // Chamada recursiva para continuar o movimento vertical
    moverBispoRecursivo(casasVerticais - 1, casasHorizontais);
}

// Função para movimentação complexa do Cavalo (duas casas para cima e uma para a direita)
// Usa loops aninhados, múltiplas variáveis e controle de fluxo com continue e break
void moverCavaloComplexo(int numMovimentos) {
    printf("\nMovimento do Cavalo (Loops Complexos):\n");

    int movimentosCompletos = 0;

    // Loop externo controla o número total de movimentos em "L"
    for (int i = 0; i < numMovimentos; i++) {
        // Loop aninhado para simular o movimento em "L" (2 para cima, 1 para direita)
        for (int j = 0; j < 3; j++) {
            if (j < 2) {
                printf("Cima\n");
                // Exemplo de uso de continue para pular para próxima iteração
                continue;
            }
            else if (j == 2) {
                printf("Direita\n");
                movimentosCompletos++;

                // Se já completou todos os movimentos, sai dos loops
                if (movimentosCompletos >= numMovimentos) {
                    break;
                }
            }
        }
        if (movimentosCompletos >= numMovimentos) {
            break;
        }
    }
}

int main() {
    printf("Movimento da Torre (Recursivo):\n");
    moverTorreRecursivo(TORRE_CASAS);
    printf("\n");

    printf("Movimento do Bispo (Recursivo com loops aninhados):\n");
    moverBispoRecursivo(BISPO_VERTICAL, BISPO_HORIZONTAL);
    printf("\n");

    printf("Movimento da Rainha (Recursivo):\n");
    moverRainhaRecursivo(RAINHA_CASAS);
    printf("\n");

    moverCavaloComplexo(CAVALO_MOVIMENTOS);

    return 0;
}