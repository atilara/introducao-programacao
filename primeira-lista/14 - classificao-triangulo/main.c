#include <stdio.h>

int main(void) {
	float ladoA, ladoB, ladoC;
	printf("Informe o valor do lado 'a': ");
	scanf("%f", &ladoA);
	printf("Infome o valor do lado 'b': ");
	scanf("%f", &ladoB);
	printf("Informe o valor do lado 'c': ");
	scanf("%f", &ladoC);
	// Verifica a condição de existência de um triângulo
	if ((ladoA + ladoB > ladoC) && (ladoB + ladoC > ladoA) && (ladoA + ladoC > ladoB)) {
		// Verifica se os três lados são iguais
		if (ladoA == ladoB && ladoB == ladoC) {
			printf("É um triângulo equilátero");
		// Verifica se dois lados são iguais
		} else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) {
			printf("É um triângulo isósceles");
		// Significa que não há lados iguais
		} else {
			printf("É um triângulo escaleno");
		}
	// Condição de existência retornou falso
	} else {
		printf("Não é um triângulo");
	}
	return 0;
}