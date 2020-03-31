#include <stdio.h>

int main(void) {
    float saque;
    int notaCem = 0, notaCinquenta = 0, notaVinte = 0, notaDez = 0, notaCinco = 0, notaDois = 0;
    int moedaUmReal = 0, moedaCinquenta = 0, moedaVinte = 0, moedaDez = 0, moedaCinco = 0, moedaUmCent = 0;
    int i;
    printf("Digite o valor do saque: ");
    scanf("%f", &saque);
    saque *= 100;
    for(i = 1; saque>0; i++) {
        if (saque >= 10000) {
            notaCem++;
            saque -= 10000;
        } else if (saque >= 5000) {
            notaCinquenta++;
            saque -= 5000;  
        } else if (saque >= 2000) {
            notaVinte++;
            saque -= 2000;  
        } else if (saque >= 1000) {
            notaDez++;
            saque -= 1000;   
        } else if (saque >= 500) {
            notaCinco++;
            saque -= 500;   
        } else if (saque >= 200) {
            notaDois++;
            saque -= 200;  
        } else if (saque >= 100) {
            moedaUmReal++;
            saque -= 100;
        } else if (saque >= 50) {
            moedaCinquenta++;
            saque -= 50;
        } else if (saque >= 25) {
            moedaVinte++;
            saque -= 25;
        } else if (saque >= 10) {
            moedaDez++;
            saque -= 10;
        } else if (saque >= 5) {
            moedaCinco++;
            saque -= 5;
        } else if (saque >= 1) {
            moedaUmCent++;
            saque -= 1;
        }
    }
    
    printf("\n\nVocê vai precisar de:\n%i notas de 100R$\n%i notas de 50R$\n%i notas de 20R$\n%i notas de 10R$\n%i notas de 5R$\n%i notas de 2R$\n\n%i moedas de 1R$\n%i moedas de 0.50R$\n%i moedas de 0.25R$\n%i moedas de 0.10R$\n%i moedas de 0.05R$\n%i moedas de 0.01R$", notaCem, notaCinquenta, notaVinte, notaDez, notaCinco, notaDois, moedaUmReal, moedaCinquenta, moedaVinte, moedaDez, moedaCinco, moedaUmCent);

    return 0;
}

