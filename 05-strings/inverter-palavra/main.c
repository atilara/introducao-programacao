#include <stdio.h>
#include <string.h>

int main () {
    int i = 0;
    char word[20];
    printf("Informe a palavra: ");
    fgets(word, 20, stdin);
    // Gets the lenght of the word, so the loop won't print trash
    int wordSize = strlen(word);
    for (i = wordSize; i >= 0; i--) {
        printf("%c", word[i]);
    }
    return 0;
}