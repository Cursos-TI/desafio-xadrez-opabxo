#include <stdio.h>

/* ---------------------------------------------------------
   FUNÇÃO RECURSIVA – TORRE
   Move a Torre N vezes para a direita.
   Cada chamada imprime uma casa de movimento.
--------------------------------------------------------- */
void moverTorre(int casas) {
    if (casas == 0) return; // caso base

    printf("Direita\n");

    moverTorre(casas - 1); // chamada recursiva
}


/* ---------------------------------------------------------
   FUNÇÃO RECURSIVA – RAINHA
   Move a Rainha N vezes para a esquerda.
--------------------------------------------------------- */
void moverRainha(int casas) {
    if (casas == 0) return;

    printf("Esquerda\n");

    moverRainha(casas - 1);
}


/* ---------------------------------------------------------
   FUNÇÃO RECURSIVA – BISPO
   O bispo se movimenta na diagonal:
   CIMA + DIREITA

   Exigência: recursividade + loops aninhados.
   O loop externo controla o "Cima".
   O loop interno controla o "Direita".

   Cada nível da recursão corresponde a uma diagonal.
--------------------------------------------------------- */
void moverBispo(int casas) {
    if (casas == 0) return; // caso base da recursão

    // O bispo precisa fazer "Cima Direita"
    // Loops aninhados obrigatórios:
    // Externo = movimento vertical
    // Interno = movimento horizontal

    for (int v = 0; v < 1; v++) { // representa "Cima"
        for (int h = 0; h < 1; h++) { // representa "Direita"
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}


/* ---------------------------------------------------------
   CAVALO – MOVIMENTO COMPLEXO
   Movimento do cavalo agora:
   → Duas casas para CIMA
   → Uma casa para DIREITA

   Exigência:
   Loops aninhados com múltiplas variáveis,
   usando break e continue.
--------------------------------------------------------- */
void moverCavalo() {
    int movimentosVertical = 2;
    int movimentosHorizontal = 1;

    // Loop externo: controla as etapas (vertical e horizontal)
    for (int etapa = 0; etapa < 2; etapa++) {

        // Loop interno complexo com múltiplas variáveis
        for (int i = 0, j = 10; i < 3 && j > 5; i++, j--) {

            // Usando continue/break para manipular fluxo
            if (i == 0 && etapa == 1) {
                continue; // na etapa horizontal, pula o primeiro ciclo
            }

            if (i == 2 && etapa == 0) {
                break; // evita ciclo desnecessário no movimento vertical
            }

            // Movimento da etapa correspondente
            if (etapa == 0) {
                printf("Cima\n");
            } else {
                printf("Direita\n");
            }
        }
    }
}


/* ---------------------------------------------------------
   PROGRAMA PRINCIPAL
--------------------------------------------------------- */
int main() {

    /* ---------------------------------------------------------
       TORRE – Recursiva
    --------------------------------------------------------- */
    int casasTorre = 5;
    moverTorre(casasTorre);

    printf("\n");

    /* ---------------------------------------------------------
       BISPO – Recursivo + loops aninhados
    --------------------------------------------------------- */
    int casasBispo = 5;
    moverBispo(casasBispo);

    printf("\n");

    /* ---------------------------------------------------------
       RAINHA – Recursiva
    --------------------------------------------------------- */
    int casasRainha = 8;
    moverRainha(casasRainha);

    printf("\n");

    /* ---------------------------------------------------------
       CAVALO – Loops complexos
    --------------------------------------------------------- */
    moverCavalo();

    return 0;
}