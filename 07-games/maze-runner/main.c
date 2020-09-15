#include <stdio.h>
// Necessary for srand
#include <stdlib.h>
// Necessary for time
#include <time.h>

// Declaring structs
typedef struct {
    int x, y;
}location;

typedef struct {
    char visible[7][10], invisible[7][10];
}map;

typedef struct {
    int health;
    location playerLocation; 
}player;

player playerOne, playerTwo;
map board;

// Declaring functions
void fillMap();
void printMap();
int dice();
void clearScreen();

// Main function
int main() {
    playerOne.health = 10;
    playerTwo.health = 10;

    // system("color 1F");
    fillMap();
    printMap();

    printf("\n%i", dice());
}

// Other functions
void fillMap() {
    board.visible[0][0] = 'P';

    int i, j;
    // Filling the first line
    for (i = 0; i < 1; i++) {
        for (j = 0; j < 10; j++) {
            if (board.visible[i][j] == 'P') {

            } else {
                board.visible[i][j] = '.';
            }
        }
    }

    // Filling the last column
    for (i = 1; i < 7; i++) {
        for (j = 9; j < 10; j++) {
            board.visible[i][j] = '.';
        }
    }

    // Filling the last line
    for (i = 6; i < 7; i++) {
        for (j = 0; j < 10; j++) {
            board.visible[i][j] = '.';
        }
    }

    // Filling the last dots of the first line
    for (i = 3; i < 7; i++) {
        for (j = 0; j < 1; j++) {
            board.visible[i][j] = '.';
        }
    }
}

void printMap() {
    int i, j;
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 10; j++) {
            printf("%c ", board.visible[i][j]);
        }
        printf("\n");
    }
    printf("\nSaúde do Player Um: %i\nSaúde do Player Dois: %i", playerOne.health, playerTwo.health);
}

int dice() {
    srand(time(NULL));
    
    return 1 + (rand() % 6);
}

void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else 
        system("clear");
    #endif
}
