#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    // ==========================================================

    printf("Movimento da Torre:\n"); //  imprimi o a frase dentro dos ("...") para o usuario.

    // for é uma estrutura de repetição que vai esta repetindo o movimento do cavalo até deterninado numero. 
    
    // O loop for tem a parte inicialização do codigo por isso definimos a variavel dentros dos parenteses "(...)"
    // nessa parte o comando que esta nos parentes vai imprimir até que o valor de "i" seja menor ou igual ao valor de 5.
    // o valor de i vai ser incrementado pelo comando "i++" até que a que o comando sea falso. 
    
    for (int i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i); //  vai imprimir a direção do movimento.
    }

    printf("\n\n"); // \n\n serve para pular duas linhas.  

    // ===========================================================

    printf("Movimento do Bispo:\n"); //  imprimi o a frase dentro dos ("...") para o usuario.

    int b = 1; // variavel int para definir o valor 'b' 

    // while w um comando loop que vai esta imprimindo a direção do movimento do bispo até que a condiçõa seja falsa.

    while (b <= 5) {
        printf("Casa %d: diagonal\n", b); //  vai imprimir a direção do movimento.
        b++; // acrecenta 1 a valor de b. 
    }

    printf("\n\n"); // \n\n serve para pular duas linhas.
    
    // ============================================================

    printf("Movimento da Rainha:\n"); //  imprimi o a frase dentro dos ("...") para o usuario. 

    int r = 1; // variavel int para definir o valor 'r'  
    do {
        printf("Casa %d: Esquerda\n", r); //  vai imprimir a direção do movimento.
        r++;
    } while (r <= 8);

    // ============================================================

    printf("Movimento da cavalo:\n"); //  linha para separar os dois codigos. 

    
    int MV = 2;   // Variavel do movimento vertical. 
    int MH = 1;   // esse a variavei do movimento horizontal do cavalo. 

    printf("\n");  // Linha em branco para separar dos movimentos anteriores

    // Loop externo (for) para alternar entre os eixos do movimento em "L"
    // i = 0: Eixo Vertical
    // i = 1: Eixo Horizontal
    // i++ serve para incrementa 1 a i.
    //Loops Aninhados:
    // O for controla a sequência: primeiro ele foca na parte vertical do "L" e depois na horizontal.
    // O while é o loop interno que executa a repetição das mensagens baseado nas constantes definidas.

    for (int i = 0; i < 2; i++) {
        
        int contador = 0;

        if (i == 0) {
            // Loop interno (while) para o movimento vertical
            while (contador < MV) {
                printf("Baixo\n");
                contador++;
            }
        } else {
            // Loop interno (while) para o movimento horizontal
            while (contador < MH) {
                printf("Esquerda\n");
                contador++;
            }
        }
    }

    return 0; //o comando return 0; dentro da função main é a forma de o seu programa dizer ao Sistema Operacional: "Terminei meu trabalho e correu tudo bem!".
}
