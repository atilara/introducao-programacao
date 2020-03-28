#include <stdio.h>

// Questão incompleta
int main(void) {

	int valores[3];
	int i, maiorValor, menorValor;

	for(i = 1; i<=3; i++) {
		printf("Informe o %iº valor: ", i);
		scanf("%i", &valores[i]);

		if (valores[i] < menorValor) {
			menorValor = valores[i];
		} else if (valores[i] > maiorValor) {
			maiorValor = valores[i];
		}
	}

	printf("\nO menor valor é: %i\nO maior é valor é: %i", menorValor, maiorValor);
}