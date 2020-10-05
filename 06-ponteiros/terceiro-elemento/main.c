#include <stdio.h>

int main() {
    // Um vetor já é um ponteiro
    int pulo[3] = { 1, 2, 3 };
    
    printf("%p\n", &pulo[0]);
    printf("%p\n", &pulo[1]);
    
    // Endereço da terceira posição do vetor pulo
    printf("%p\n", &pulo[2]);
    
    return 0;
}
