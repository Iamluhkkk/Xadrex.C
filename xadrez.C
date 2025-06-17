#include <stdio.h>

int main() {
    // Número de casas que a Torre vai se mover para a direita
    int casas_torre = 5;

    // Movimento da Torre usando 'for'
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");  // Torre move para a direita
    }

    // Número de casas que o Bispo vai se mover na diagonal (cima e direita)
    int casas_bispo = 5;
    int i = 0;

    // Movimento do Bispo usando 'while'
    printf("\nMovimento do Bispo:\n");
    while (i < casas_bispo) {
        printf("Cima, Direita\n");  // Bispo move na diagonal
        i++;
    }

    // Número de casas que a Rainha vai se mover para a esquerda
    int casas_rainha = 8;
    i = 0;

    // Movimento da Rainha usando 'do-while'
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");  // Rainha move para a esquerda
        i++;
    } while (i < casas_rainha);

    return 0;
}