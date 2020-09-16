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
    int health, isBlocked;
    location playerLocation; 
}player;

player playerOne, playerTwo;
map board;
int game = 0;

// Declaring functions
void fillMap();
void printMap();
void printInstructions();
int firstToPlay();
int movePlayer();
int isGameOver();
int dice();
void clearScreen();

// Main function
int main() {
    // Initial HP
    playerOne.health = 10;
    playerTwo.health = 10;
    playerTwo.isBlocked = 0;
    playerTwo.isBlocked = 0;
    // Created to generate random numbers
    srand(time(NULL));
    
    printf("\nBem-vindo ao The Maze Runner!");
    Sleep(1500);

    printf("\n\nDescobrindo qual será o primeiro jogador, jogando dados...");
    int turn = firstToPlay();

    Sleep(1500);

    printf("\n\nO primeiro a jogar é o Jogador %i", turn);

    printf("\n\nPressionem ENTER para começar!!!");
    getchar();

    clearScreen();

    fillMap();
    printInstructions();
    do {
        if (turn == 1 && playerOne.isBlocked == 1) {
            turn = 2;
            playerOne.isBlocked = 0;
        } else if (turn == 2 && playerTwo.isBlocked == 1) {
            turn = 1;
            playerTwo.isBlocked = 0;
        }
        printMap();
        printf("\nSaúde do Jogador 1: %i\nSaúde do Jogador 2: %i\n\n", playerOne.health, playerTwo.health);
        printf("Jogador %i, aperte ENTER para lançar o dado", turn);
        getchar();
        int moves = dice();
        printf("\nVocê lançou o dado e tirou: %i\n\nAperte ENTER para continuar", moves);
        getchar();
        clearScreen();
        printInstructions();
        int square = movePlayer(turn == 1 ? playerOne : playerTwo, moves, turn);

        // Eventos responsáveis pela funcionalidade de cada cor
        if (square == 1) {
            printf("Jogador %i, você caiu na casa branca! Nada aconteceu!\n\n", turn);
        } else if (square == 2) {
            printf("Jogador %i, você caiu na casa vermelha! Perdeu 3 de vida!\n\n", turn);
            if (turn == 1) playerOne.health = playerOne.health < 3 ? 0 : playerOne.health - 3;
            else playerTwo.health = playerTwo.health < 3 ? 0 : playerTwo.health - 3;
        } else if (square == 3) {
            if (turn == 1 && playerOne.health != 10) {
                printf("Jogador %i, você caiu na casa verde! Recuperou 1 de vida!\n\n", turn);
                playerOne.health += 1;
            } 
            else if (playerTwo.health != 10) {
                printf("Jogador %i, você caiu na casa verde! Recuperou 1 de vida!\n\n", turn);
                playerTwo.health += 1;
            } else {
                printf("Jogador %i, você caiu na casa verde! Porém sua vida já estava cheia!\n\n", turn);
            }
        } else if (square == 4) {
            printf("Jogador %i, você caiu na casa azul! Jogue novamente!\n\n", turn);
            continue;
        } else if (square == 5) {
            printf("Jogador %i, você caiu na casa amarela! Uma rodada sem jogar!\n\n", turn);
            if (turn == 1) {
                playerOne.isBlocked = 1;
            }
            else if (turn == 2) {
                playerTwo.isBlocked = 1;
            }
        } else if (square == 6) {
            printf("Jogador %i, você caiu na casa preta! Volte para o início!\n\n", turn);
            if (turn == 1) {
                playerOne.playerLocation.x = 0;
                playerOne.playerLocation.y = 0;
            } else if (turn == 2) {
                playerTwo.playerLocation.x = 0;
                playerTwo.playerLocation.y = 0;
            } 
        }
        game = isGameOver();
        turn = turn == 1 ? 2 : 1;
    } while (game == 0);

    clearScreen();

    if (game == 1)
        printf("O jogador 2 venceu! \n\nA vida do jogador 1 chegou ao fim!");
    else if (game == 2)
        printf("O jogador 1 venceu! \n\nA vida do jogador 2 chegou ao fim!");
    else if (game == 3)
        printf("O jogador 1 venceu! \n\nChegou ao fim do tabuleiro!");
    else
        printf("O jogador 2 venceu! \n\nChegou ao fim do tabuleiro!"); 
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
            int isPlayer1InSquare = 0;
            int isPlayer2InSquare = 0;

            if ( i == playerOne.playerLocation.x && j == playerOne.playerLocation.y ) isPlayer1InSquare = 1;
            if ( i == playerTwo.playerLocation.x && j == playerTwo.playerLocation.y ) isPlayer2InSquare = 1;
            
            int place = board.spaces[i][j];
            if ( isPlayer1InSquare && isPlayer2InSquare ) printf("P ");
            else if ( isPlayer1InSquare ) printf("1 ");
            else if ( isPlayer2InSquare ) printf("2 ");
            else if (place == -1) printf("I ");
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
}

void printInstructions() {
    printf("\nInstruções do Jogo:");
    printf("\n\nW = é um espaço neutro onde não há ação sobre o jogador");
    printf("\nR = penaliza o jogador em 3 pontos de vida");
    printf("\nG = recupera 1 ponto de vida do jogador");
    printf("\nY = aprisiona o jogador por um turno sem jogar");
    printf("\nB = permite que o jogador jogue novamente");
    printf("\nL = faz o jogador voltar para o início");
    printf("\nI = início do tabuleiro");
    printf("\nE = final do tabuleiro");
    printf("\nP = jogadores na mesma posição\n\n");
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
int movePlayer(player Player, int moves, int turn) {

    int currentX = Player.playerLocation.x;
    int currentY = Player.playerLocation.y;

    int i;
    for (i = 0; i < moves; i++) {
        //  Right
        if (currentX == 0 && currentY < 9) {
            if ( turn == 1 ) playerOne.playerLocation.y += 1;
            else if ( turn == 2 ) playerTwo.playerLocation.y += 1;
            currentY++;
        } 
        // Down
        else if (currentX < 6 && currentY == 9) {
            if ( turn == 1 ) playerOne.playerLocation.x += 1;
            else if ( turn == 2 ) playerTwo.playerLocation.x += 1;
            currentX++;
        }
        // Left
        else if (currentX == 6 && currentY > 0) {
            if ( turn == 1 ) playerOne.playerLocation.y -= 1;
            else if ( turn == 2 ) playerTwo.playerLocation.y -= 1;
            currentY--;
        }
        // Up
        else if (currentX > 3 && currentY == 0) {
            if ( turn == 1 ) playerOne.playerLocation.x -= 1;
            else if ( turn == 2 ) playerTwo.playerLocation.x -= 1;
            currentX--;
        }
    }

    int currentLocation = board.spaces[currentX][currentY];
    
    return currentLocation;
}

int isGameOver() {
    if (playerOne.health == 0) {
        return 1;
    } else if (playerTwo.health == 0) {
        return 2;
    } else if (playerOne.playerLocation.x == 3 && playerOne.playerLocation.y == 0) {
        return 3;
    } else if (playerTwo.playerLocation.x == 3 && playerTwo.playerLocation.y == 0) {
        return 4;
    } 
    return 0;
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
