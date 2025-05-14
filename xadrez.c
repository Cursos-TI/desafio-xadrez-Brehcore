#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Mestre - Funções Recursivas e Loops Aninhados
void moverBispo(int casas, int contador) {
    //Caso base - Se co ontador for maior que o número de casas, termina a recursão
    if(contador > casas) {
        return;
    }

//Movimento do Bispo
printf("Cima Direita\n");
//Chamada recursiva para o próximo movimento
moverBispo(casas, contador + 1);
}

//Função para movimentar a Torre para a direta
void moverTorre(int casas) {
    for (int i = 1; i <= casas; i++) {
        printf("Direita\n");
    }
}

//Função para movimentar a Rainha para a esquerda
void moverRainha(int casas) {
    int contador = 1;
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador <= casas);
}

//Função para movimentor o Cavalho (L, uma vez para cima à direita)
void moverCavalo() {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (i==0 && j == 0) {
                printf("Cima\n");
            } else if (i == 1 && j == 1){
                printf("Direita\n");
                break; //Termina o segundo loop após o cavalo movimentar uma vez
            }
            continue; // Para continuar o loop caso a condição não for atendida
        }
    }
}

int main() {

    // Movimentação do Bispo com recursão
    const int casasBispo = 5;
    printf("Movimento do Bispo: \n");
    moverBispo(casasBispo, 1);
    printf("\n");

    // Movimentação da Torre
    const int casasTorre = 5;
    printf("Movimento da Torre: \n");
    moverTorre(casasTorre);
    printf("\n");

    // Movimentação da Rainha
    const int casasRainha = 8;
    printf("Movimento da Rainha: \n");
    moverRainha(casasRainha);
    printf("\n");

    // Movimentação do Cavalo
    printf("Movimento do Cavalo: \n");
    moverCavalo();
    printf("\n");

    return 0;
}
