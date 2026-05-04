
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
#include <stdio.h>

int main (){
    int torre = 0;
    int bispo = 1;
    int rainha = 1;
    int cavalo = 1;

    printf("### Bem-Vindo ao Jogo de Xadrez! ###\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // Torre 5 casas para a direita.
    for (torre = 0; torre < 5; torre++){
        printf("Torre: Direita \n"); //imprimir a direção.
    }

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // Bispo 5 casas na Diagonal (Cima / Direita).
    do {
        printf("Bispo: Cima / Direita \n", bispo);
        bispo++;
    } while (bispo <= 5);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // Rainha 8 casas a esquerda.
  while (rainha <= 8)
    {
        printf("Rainha: Esquerda\n", rainha);
        rainha++;
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    // Cavlo 2 casas para cima e 1 para direita.
    while (cavalo--){
        for (int i = 0; i < 2; i++){
            printf("Cavalo: Cima\n");
        }
        printf("Cavalo: Direita\n");
        
    }
    
    return 0;
    
}

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

 