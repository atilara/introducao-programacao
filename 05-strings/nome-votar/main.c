#include <stdio.h>

int main() {
    char name[20];
    int age;
    printf("Informe seu nome: ");
    scanf("%s", name);
    printf("Informe sua idade: ");
    scanf("%i", &age);
    if (age < 18) {
        printf("Não é obrigado a votar");
    } else {
        printf("%s é obrigado a votar", name);
    }
    return 0;
}