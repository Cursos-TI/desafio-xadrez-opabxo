#include <stdio.h>

int main() {
    int i;

    // ------------------------------
    // Movimento da TORRE (for)
    // A torre se move em linha reta.
    // Aqui ela vai andar 5 casas para a direita.
    // ------------------------------
    int casasTorre = 5;
    for (i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // ------------------------------
    // Movimento do BISPO (while)
    // O bispo se move na diagonal.
    // Aqui ele vai andar 5 casas na diagonal
    // para cima e para a direita.
    // ------------------------------
    int casasBispo = 5;
    int b = 0;
    while (b < casasBispo) {
        printf("Cima Direita\n");
        b++;
    }

    // ------------------------------
    // Movimento da RAINHA (do-while)
    // A rainha pode se mover em todas as direções.
    // Aqui ela vai andar 8 casas para a esquerda.
    // ------------------------------
    int casasRainha = 8;
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < casasRainha);

    return 0;
}