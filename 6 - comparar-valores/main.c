#include <stdio.h>

int main(void) {

	int valores[2];
	int i, maiorValor, menorValor;
	for(i = 0; i<=2; i++) {
		printf("Informe o %iº valor: ", i+1);
		scanf("%i", &valores[i]);
	}
	maiorValor = valores[0];
	menorValor = valores[0];
	for(i = 0; i<=2; i++) {
		if (valores[i] < menorValor) {
			menorValor = valores[i];
		} else if (valores[i] > maiorValor) {
			maiorValor = valores[i];
		}
	}

	printf("\nO menor valor é: %i\nO maior é valor é: %i\n", menorValor, maiorValor);
	if (menorValor < 0) {
		printf("\nO menor em módulo vale: %i", menorValor * -1);
	} else if (menorValor >= 0) {
		printf("\nO menor em módulo vale ele mesmo");
	} if (maiorValor < 0) {
		printf("\nO maior valor em módulo vale: %i", maiorValor * -1);
	} else if (maiorValor >= 0) {
		printf("\nO maior valor em módulo vale ele mesmo");
	}
}