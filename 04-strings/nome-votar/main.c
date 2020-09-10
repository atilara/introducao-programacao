#include <stdio.h>

int main() {
    char name[40];
    int age;
    printf("Informe seu nome: ");
    fgets(name, 40, stdin);
    printf("Informe sua idade: ");
    scanf("%i", &age);
    if (age < 18) {
        printf("Não é obrigado a votar");
    } else {
        printf("%s é obrigado a votar", name);
    }
    return 0;
}