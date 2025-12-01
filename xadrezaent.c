#include <stdio.h>

int main() {

    // ---------------------------------------
    // MOVIMENTO DA TORRE  (for)
    // 5 casas para a direita
    // ---------------------------------------
    int casasTorre = 5;

    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // ---------------------------------------
    // MOVIMENTO DO BISPO  (while)
    // 5 casas na diagonal: Cima + Direita
    // ---------------------------------------
    int casasBispo = 5;
    int b = 0;

    while (b < casasBispo) {
        printf("Cima Direita\n");
        b++;
    }

    // ---------------------------------------
    // MOVIMENTO DA RAINHA  (do-while)
    // 8 casas para a esquerda
    // ---------------------------------------
    int casasRainha = 8;
    int r = 0;

    do {
        printf("Esquerda\n");
        r++;
    } while (r < casasRainha);


    // ======================================================================
    // MOVIMENTO DO CAVALO (Loops aninhados)
    // Movimento em "L":
    //   → Duas casas para baixo
    //   → Uma casa para esquerda
    //
    // Exigência:
    //   - Usar loops aninhados
    //   - Pelo menos um deles deve ser FOR (obrigatório)
    //   - O outro pode ser WHILE ou DO-WHILE
    //
    // Lógica:
    //   Primeiro movimento: repetir "Baixo" 2 vezes
    //   Segundo movimento: repetir "Esquerda" 1 vez
    // ======================================================================

    printf("\n"); // Linha em branco separando o cavalo das outras peças

    int passosBaixo = 2;
    int passosEsquerda = 1;

    // Loop externo (FOR) para controlar as fases do movimento
    for (int etapa = 0; etapa < 2; etapa++) {

        // Se etapa == 0 → mover para baixo
        // Se etapa == 1 → mover para esquerda

        if (etapa == 0) {
            int i = 0;  // contador do while

            // Loop interno (WHILE) para mover 2 casas para baixo
            while (i < passosBaixo) {
                printf("Baixo\n");
                i++;
            }
        } 
        else {
            int j = 0;

            // Loop interno (WHILE) para mover 1 casa para esquerda
            while (j < passosEsquerda) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    return 0;
}