#include <stdio.h>

int main() {
    // Variáveis para controlar o número de casas
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;
    int i;
    
    // ========== TORRE ==========
    // Move-se 5 casas para a direita usando FOR
    printf("=== Movimento da Torre ===\n");
    for (i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");
    
    // ========== BISPO ==========
    // Move-se 5 casas na diagonal (cima e direita) usando WHILE
    printf("=== Movimento do Bispo ===\n");
    i = 0;
    while (i < casas_bispo) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");
    
    // ========== RAINHA ==========
    // Move-se 8 casas para a esquerda usando DO-WHILE
    printf("=== Movimento da Rainha ===\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < casas_rainha);
    printf("\n");
    
    // ========== CAVALO ==========
    // Move-se em "L": 2 casas para baixo e 1 casa para esquerda
    // Usando loops aninhados (FOR externo e WHILE interno)
    printf("=== Movimento do Cavalo ===\n");
    int casas_verticais = 2;
    int casas_horizontais = 1;
    int j;
    
    // Loop externo FOR: controla as etapas do movimento em L
    for (i = 0; i < 2; i++) {
        // Primeira etapa: 2 casas para baixo
        if (i == 0) {
            j = 0;
            while (j < casas_verticais) {
                printf("Baixo\n");
                j++;
            }
        }
        // Segunda etapa: 1 casa para esquerda
        else {
            j = 0;
            while (j < casas_horizontais) {
                printf("Esquerda\n");
                j++;
            }
        }
    }
    printf("\n");
    
    return 0;
}