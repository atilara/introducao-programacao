#include <stdio.h>
#include <math.h>

/* 
Faça um programa que receba um inteiro e determine se ele é primo.
*/

int main(void) {
	int num, i, restoZero = 0;
	printf("Informe o valor: ");
	scanf("%i", &num);
	// Divide o número informado por 1 até ele mesmo
	for (i = 1; i<=num; i++) {
		if (num % i == 0) {
			restoZero++;
		}
	}
	// Se o valor de números divisíveis for maior que 2, o número não é primo
	if (restoZero > 2) {
		printf("Não é primo");
	} else {
		printf("É primo");
	}
		
}