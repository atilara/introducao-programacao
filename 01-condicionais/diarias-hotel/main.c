#include <stdio.h>

int numberDays;
float price;

float priceToPay(int number) {
    if (number < 15) {
        price = (15.3 * number);
    } else if (number == 15) {
        price = (10 * number);
    } else {
        price = (8.5 * number);
    }
    return price = (number * 50) + price;
}

int readPositiveValue(int number) {
    while (numberDays < 0) {
        printf("Informe um valor válido: ");
        scanf("%i", &numberDays);
    }
    return numberDays;
}

int main() {
    printf("Informe a quantidade de diárias: ");
    scanf("%i", &numberDays);
    readPositiveValue(numberDays);
    priceToPay(numberDays);
    printf("R$ %.2f", price);
    return 0;
}

