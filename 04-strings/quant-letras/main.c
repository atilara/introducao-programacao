#include <stdio.h>
#include <string.h>

int main() {
    char name[40];
    printf("Informe o nome: ");
    fgets(name, 40, stdin);
    printf("A quantidade de letras é: %i", strlen(name) - 1);
    return 0;
}