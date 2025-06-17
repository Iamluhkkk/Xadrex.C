#include <stdio.h>

int main() {
    // Número de movimentos em "L" que o cavalo fará
    int movimentos_L = 3;

    // Variáveis para controle dos loops
    int i, j;

    printf("\nMovimento do Cavalo:\n");

    // Loop externo (for) para repetir o movimento em "L"
    for (i = 0; i < movimentos_L; i++) {
        // Loop interno (while) para mover duas casas para baixo
        j = 0;
        while (j < 2) {
            printf("Baixo\n");
            j++;
        }
        // Após mover duas casas para baixo, mover uma casa para a esquerda
        printf("Esquerda\n");
    }

    return 0;
}