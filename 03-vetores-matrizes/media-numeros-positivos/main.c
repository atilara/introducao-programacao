#include <stdio.h>
/*
Faça um programa que receba um inteiro N positivo, depois leia N valores float e em seguida imprima a média aritmética dos valores POSITIVOS.
*/
int main(void) {
	int n, i;
	printf("Informe a quantidade de valores a serem lidos: ");
	scanf("%i", &n);

	float numeros[n], soma, quantidadeNumeros;
	for (i = 1; i<=n; i++) {
		printf("Informe o %iº número: ", i);
		scanf("%f", &numeros[i]);
	}

	for (i = 1; i<=n; i++) {
		if (numeros[i] >= 0) {
			soma += numeros[i];
			quantidadeNumeros++;
		} 
	}
	printf("O valor da média é: %.2f", (soma/quantidadeNumeros));
	return 0;
}