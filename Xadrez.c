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
    
    return 0;
}