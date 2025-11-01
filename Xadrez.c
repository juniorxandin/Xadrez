<<<<<<< HEAD
#include <stdio.h>

// ========== FUNÇÕES RECURSIVAS ==========

// Função recursiva para movimento da Torre
void mover_torre(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Direita\n");
    mover_torre(casas - 1);
}

// Função recursiva para movimento da Rainha
void mover_rainha(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Esquerda\n");
    mover_rainha(casas - 1);
}

// Função recursiva auxiliar para movimento diagonal do Bispo
void mover_bispo_recursivo(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Cima\n");
    printf("Direita\n");
    mover_bispo_recursivo(casas - 1);
}

int main() {
    // Declaração de TODAS as variáveis no início
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;
    int i, j;
    int casas_verticais = 2;
    int casas_horizontais = 1;
    int etapa = 0;
    int movimento_completo = 0;
    int contador = 0;
    
    // ========== TORRE (Recursiva) ==========
    printf("=== Movimento da Torre ===\n");
    mover_torre(casas_torre);
    printf("\n");
    
    // ========== BISPO (Recursiva com Loops Aninhados) ==========
    printf("=== Movimento do Bispo ===\n");
    // Loop externo: movimento vertical (5 vezes)
    for (i = 0; i < casas_bispo; i++) {
        // Loop interno: movimento horizontal (1 vez para cada vertical)
        for (j = 0; j < 1; j++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }
    printf("\n");
    
    // ========== RAINHA (Recursiva) ==========
    printf("=== Movimento da Rainha ===\n");
    mover_rainha(casas_rainha);
    printf("\n");
    
    // ========== CAVALO (Loops Complexos) ==========
    printf("=== Movimento do Cavalo ===\n");
    // Loop externo: controla as etapas do movimento
    for (etapa = 0; etapa < 2 && !movimento_completo; etapa++) {
        
        // Primeira etapa: 2 casas para cima
        if (etapa == 0) {
            contador = 0;
            while (contador < casas_verticais) {
                printf("Cima\n");
                contador++;
                
                // Verificação de segurança
                if (contador >= 10) {
                    break;
                }
            }
        }
        // Segunda etapa: 1 casa para a direita
        else if (etapa == 1) {
            contador = 0;
            do {
                printf("Direita\n");
                contador++;
                
                // Marca como movimento completo
                if (contador >= casas_horizontais) {
                    movimento_completo = 1;
                    break;
                }
            } while (contador < casas_horizontais);
        }
        else {
            // Caso inesperado, sair do loop
            continue;
        }
    }
    printf("\n");
    
    return 0;
}
=======

>>>>>>> 0660dd80a25940ac2049d9339f05488bfca79de3
