#include <stdio.h>

/* 
Faça um programa que leia um float e mostre sua parte inteira e decimal separadas. 
(Ignore erros de arredondamento de pontos flutuantes). 
*/

int main(void) {
	float numero, parteDecimal;
	int parteInteira;
	printf("Informe o número: ");
	scanf("%f", &numero);
	parteInteira = numero;
	parteDecimal = numero - parteInteira;
	printf("Inteira: %i \nDecimal: %.2f", parteInteira, parteDecimal);
  	return 0;
}