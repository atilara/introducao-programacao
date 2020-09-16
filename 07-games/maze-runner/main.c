#include <stdio.h>
// Necessary for srand
#include <stdlib.h>
// Necessary for time
#include <time.h>
// Necessary for sleep
#include <windows.h>


// Declaring structs and variables
typedef struct {
    int x, y;
}location;

typedef struct {
    int spaces[7][10];
}map;

typedef struct {
    int health;
    location playerLocation; 
}player;

player playerOne, playerTwo;
map board;
int game = 0;

// Declaring functions
void fillMap();
void printMap();
int firstToPlay();
int movePlayer();
int dice();
void clearScreen();

// Main function
int main() {
    // Initial HP
    playerOne.health = 10;
    playerTwo.health = 10;
    // Created to generate random numbers
    srand(time(NULL));
    
    printf("\nBem-vindo ao The Maze Runner!");
    Sleep(1500);

    printf("\nInstruções do Jogo:");
    printf("\n\nA célula branca (W) é um espaço neutro onde não há ação sobre o jogador");
    printf("\nA célula vermelha (R) penaliza o jogador em 3 pontos de vida");
    printf("\nA célula verde (G) recupera 1 ponto de vida do jogador");
    printf("\nA célula amarela (Y) aprisiona o jogador por um turno sem jogar");
    printf("\nA célula azul (B) permite que o jogador jogue novamente");
    printf("\nA célula preta (L) faz o jogador voltar para o início");
    
    Sleep(5000);

    printf("\n\nDescobrindo qual será o primeiro jogador, jogando dados...");
    int turn = firstToPlay();

    Sleep(1500);

    printf("\nO primeiro a jogar é o Player %i", turn);
    Sleep(1500);
    clearScreen();

    fillMap();
    do {
        printMap();
        printf("Aperte Enter para lançar o dado");
        getchar();
        int moves = dice();
        printf("\nVocê lançou o dado e tirou: %i\n\nAperte Enter para continuar", moves);
        getchar();
        movePlayer(turn == 1 ? playerOne : playerTwo, moves);
        clearScreen();
    } while (game == 0);
}
// Other functions
void fillMap() {
    playerOne.playerLocation.x = 0;
    playerOne.playerLocation.y = 0;

    playerTwo.playerLocation.x = 0;
    playerTwo.playerLocation.y = 0;
    
    // -1 = INÍCIO
    // 0 = NADA
    // 1 = BRANCA
    // 2 = VERMELHO
    // 3 = VERDE
    // 4 = AZUL
    // 5 = AMARELO
    // 6 = PRETO
    // 7 = FIM
    
    board.spaces[0][0] = -1;
    board.spaces[0][1] = 1;
    board.spaces[0][2] = 2;
    board.spaces[0][3] = 3;
    board.spaces[0][4] = 1;
    board.spaces[0][5] = 4;
    board.spaces[0][6] = 1;
    board.spaces[0][7] = 5;
    board.spaces[0][8] = 1;
    board.spaces[0][9] = 2;

    board.spaces[1][9] = 3;
    board.spaces[2][9] = 6;
    board.spaces[3][9] = 4;
    board.spaces[4][9] = 1;
    board.spaces[5][9] = 1;
    board.spaces[6][9] = 2;

    board.spaces[6][0] = 2;
    board.spaces[6][1] = 4;
    board.spaces[6][2] = 1;
    board.spaces[6][3] = 3;
    board.spaces[6][4] = 2;
    board.spaces[6][5] = 1;
    board.spaces[6][6] = 4;
    board.spaces[6][7] = 1;
    board.spaces[6][8] = 3;

    board.spaces[3][0] = 7;
    board.spaces[4][0] = 3;
    board.spaces[5][0] = 4;
    board.spaces[6][0] = 2;
}

void printMap() {
    int i, j;
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 10; j++) {
            
            int place = board.spaces[i][j];
            if (place == -1) printf("I ");
            else if (place == 1) printf("W ");
            else if (place == 2) printf("R ");
            else if (place == 3) printf("G ");
            else if (place == 4) printf("B ");
            else if (place == 5) printf("Y ");
            else if (place == 6) printf("L ");
            else if (place == 7) printf("E ");
            else printf("  ");
        }
        printf("\n");
    }
    printf("\nSaúde do Player 1: %i\nSaúde do Player 2: %i\n\n", playerOne.health, playerTwo.health);
}

int firstToPlay() {
    int playerOneAttempt = 0, playerTwoAttempt = 0;
    while (playerOneAttempt == playerTwoAttempt) {
        playerOneAttempt = dice() + dice();
        playerTwoAttempt = dice() + dice();
    }
    if (playerOneAttempt > playerTwoAttempt) {
        return 1;
    } else {
        return 2;
    }
}

// Retorna o número correspondente a cada tipo de espaço no tabuleiro que o player cair
int movePlayer(player player, int moves) {
    
    int currentX = player.playerLocation.x;
    int currentY = player.playerLocation.y;

    int i;
    for (i = 0; i < moves; i++) {
        //  Right
        if (currentX == 0 && currentY < 10) {
            player.playerLocation.y++;
        } 
        // Down
        else if (currentX < 6 && currentY == 9) {
            player.playerLocation.x++;
        }
        // Left
        else if (currentX == 6 && currentY > 0) {
            player.playerLocation.y--;

        }
        // Up
        else if (currentX > 3 && currentY == 0) {
            player.playerLocation.x--;
        }
    }
    int currentLocation = board.spaces[player.playerLocation.x][player.playerLocation.y];
    
    return currentLocation;
}

int dice() {
    return 1 + (rand() % 6);
}

void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else 
        system("clear");
    #endif
}
