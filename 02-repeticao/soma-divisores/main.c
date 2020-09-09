#include <stdio.h>

int main(void) {
    int number, sum = 0, i;
    printf("Informe o número: ");
    scanf("%i", &number);
    for (i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    printf("O resultado é: %i", sum);
    return 0;
}