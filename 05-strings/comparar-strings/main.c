#include <stdio.h>
#include <string.h>

int main() {
    char firstString[30], secondString[30];     
    printf("Informe a primeira string: ");
    fgets(firstString, 30, stdin);
    printf("Informe a secunda: ");
    fgets(secondString, 30, stdin);
    int comparison = strcmp(firstString, secondString);
    if (comparison == 0) {
        printf("É igual");
    } else {
        printf("Não é igual");
    }
    return 0;
}