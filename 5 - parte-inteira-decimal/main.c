#include <stdio.h>

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