#include <stdio.h>

#define SIZE 8 // Tamanho do tabuleiro 8x8

// Função para exibir o tabuleiro
void exibirTabuleiro(char tabuleiro[SIZE][SIZE]) {
    printf("\nTabuleiro Atual:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função recursiva para mover a Torre (horizontal ou vertical)
void moverTorre(char tabuleiro[SIZE][SIZE], int x, int y, int movimento, char direcao) {
    if (movimento <= 0) return;

    tabuleiro[x][y] = '.'; // Limpa a posição atual
    if (direcao == 'd') {
        y++;
        printf("Direita\n");
    } else if (direcao == 'e') {
        y--;
        printf("Esquerda\n");
    } else if (direcao == 'c') {
        x++;
        printf("Cima\n");
    } else if (direcao == 'b') {
        x--;
        printf("Baixo\n");
    }
    
    tabuleiro[x][y] = 'T'; // Marca a nova posição da Torre
    exibirTabuleiro(tabuleiro); // Exibe o tabuleiro após o movimento
    
    moverTorre(tabuleiro, x, y, movimento - 1, direcao); // Chama recursivamente
}

// Função recursiva para mover o Bispo (diagonal)
void moverBispo(char tabuleiro[SIZE][SIZE], int x, int y, int movimento, char direcaoX, char direcaoY) {
    if (movimento <= 0) return;

    tabuleiro[x][y] = '.';
    if (direcaoX == 'c') x++;
    else if (direcaoX == 'b') x--;

    if (direcaoY == 'd') y++;
    else if (direcaoY == 'e') y--;

    printf("Cima\n"); // Cima ou Baixo, dependendo da direção
    printf("Direita\n"); // Direita ou Esquerda, dependendo da direção
    
    tabuleiro[x][y] = 'B';
    exibirTabuleiro(tabuleiro);
    
    moverBispo(tabuleiro, x, y, movimento - 1, direcaoX, direcaoY); // Recursividade
}

// Função recursiva para mover a Rainha (horizontal, vertical e diagonal)
void moverRainha(char tabuleiro[SIZE][SIZE], int x, int y, int movimento, char direcaoX, char direcaoY) {
    if (movimento <= 0) return;

    tabuleiro[x][y] = '.';
    
    if (direcaoX == 'c') x++;
    else if (direcaoX == 'b') x--;
    
    if (direcaoY == 'd') y++;
    else if (direcaoY == 'e') y--;
    
    printf("Cima\n"); // Cima ou Baixo
    printf("Direita\n"); // Direita ou Esquerda
    
    tabuleiro[x][y] = 'Q';
    exibirTabuleiro(tabuleiro);
    
    moverRainha(tabuleiro, x, y, movimento - 1, direcaoX, direcaoY); // Recursividade
}

// Função para mover o Cavalo (em "L") com loops aninhados e condições
void moverCavalo(char tabuleiro[SIZE][SIZE], int x, int y) {
    tabuleiro[x][y] = '.';
    // Cavalo se move em 8 direções possíveis
    int movimentos[8][2] = {{-2, 1}, {-2, -1}, {2, 1}, {2, -1}, {-1, 2}, {-1, -2}, {1, 2}, {1, -2}};
    
    for (int i = 0; i < 8; i++) {
        int novoX = x + movimentos[i][0];
        int novoY = y + movimentos[i][1];

        if (novoX >= 0 && novoX < SIZE && novoY >= 0 && novoY < SIZE) {
            tabuleiro[novoX][novoY] = 'C';
            printf("Cavalo se move para (%d, %d)\n", novoX, novoY);
            exibirTabuleiro(tabuleiro);
            tabuleiro[novoX][novoY] = '.'; // Limpa a posição do Cavalo após exibir
        }
    }
}

int main() {
    // Inicializando o tabuleiro 8x8
    char tabuleiro[SIZE][SIZE];

    // Preenchendo o tabuleiro com '.'
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            tabuleiro[i][j] = '.';
        }
    }

    // Definindo a posição inicial das peças
    tabuleiro[0][0] = 'T'; // Torre no canto
    tabuleiro[0][1] = 'B'; // Bispo
    tabuleiro[0][2] = 'Q'; // Rainha
    tabuleiro[0][3] = 'C'; // Cavalo

    // Exibir o tabuleiro inicial
    exibirTabuleiro(tabuleiro);

    // Movimentação das peças usando recursão e loops complexos
    printf("\nMovimento da Torre:\n");
    moverTorre(tabuleiro, 0, 0, 5, 'd'); // Movendo Torre para a direita
    
    printf("\nMovimento do Bispo:\n");
    moverBispo(tabuleiro, 0, 1, 5, 'c', 'd'); // Movendo Bispo diagonalmente para baixo-direita

    printf("\nMovimento da Rainha:\n");
    moverRainha(tabuleiro, 0, 2, 5, 'c', 'd'); // Movendo Rainha para baixo-direita

    printf("\nMovimento do Cavalo:\n");
    moverCavalo(tabuleiro, 0, 3); // Movendo Cavalo com loops aninhados

    return 0;
}
