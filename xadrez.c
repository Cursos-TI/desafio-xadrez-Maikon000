#include <stdio.h> // Biblioteca padrão de entrada e saída

// === 1. Void para mover a torre recursivamente. ===

// O comando void indica que a função não retorna nenhum valor.

void moverTorre(int n) {
    if (n > 0) {
        printf("Direita\n"); // Movimento horizontal
        moverTorre(n - 1); // Chamada recursiva
    }
}

// === 2. Void para mover o bispo recursivamente. ===

void moverBispoRecursivo(int n) {
    if (n > 0) {
        printf("Cima, Direita\n"); // Movimento diagonal
        moverBispoRecursivo(n - 1); // Chamada recursiva
    }
}

// === 3. Void para mover a rainha recursivamente. ===

void moverRainha(int n) {
    if (n > 0) {
        printf("Esquerda\n"); // Movimento horizontal
        moverRainha(n - 1); // Chamada recursiva 
    }
}

// Intmain principal do programa.   

int main() {

    // === 1. MOVIMENTAÇÃO DA TORRE (Recursiva) ===

    printf("Movimento da Torre:\n");
    moverTorre(5); // Move a torre 5 vezes para a direita
    printf("\n");

    // === 2. MOVIMENTAÇÃO DO BISPO (Recursiva + Loops Aninhados) ===

    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(5); //  Move o bispo 5 vezes na diagonal
    
    printf("\nMovimento do Bispo (Loops Aninhados):\n");

    // Loop externo para Vertical, interno para Horizontal

    for (int i = 0; i < 5; i++) // Loop externo para movimento vertical
    {
        printf("Cima, "); //    Movimento vertical
        for (int j = 0; j < 1; j++) // Loop interno para movimento horizontal
        {
            printf("Direita\n"); // Movimento horizontal
        }
    }

    printf("\n");  // Comando para pular linha. 

    // === 3. MOVIMENTAÇÃO DA RAINHA (Recursiva). ===

    printf("Movimento da Rainha:\n"); // Indica o início do movimento da rainha.
    moverRainha(8);                   //  Move a rainha 8 vezes para a esquerda
    printf("\n");                     //  Comando para pular linha.

    // === 4. MOVIMENTAÇÃO DO CAVALO (Loops Complexos: 2 para Cima, 1 para Direita) ===

    printf("Movimento do Cavalo:\n"); // Indica o início do movimento do cavalo.
    
    // Usando loop for com múltiplas variáveis e condições
    
    for (int i = 0, j = 0; i < 3; i++) // Loop para controlar os movimentos do cavalo
    {
        if (i < 2) // Para os dois primeiros movimentos, executa o movimento vertical
        {
            printf("Cima\n"); // Movimento vertical
            continue; // Força a próxima iteração do loop para completar os movimentos para cima
        }
        
        // Quando i chega a 2, este loop while executa a parte horizontal
        while (j < 1) {
            printf("Direita\n"); // Movimento horizontal
            j++; // Incrementa j para evitar loop infinito
            break; // Sai do loop interno após 1 execução
        }
    }

    return 0; // Indica que o programa terminou com sucesso.
}
