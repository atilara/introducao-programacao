#include <stdio.h>

int main(void) {
	int numero, i;
	printf("Informe o número: ");
	scanf("%i", &numero);

	for (i = 1; i<=10; i++){
		printf("%i * %i = %i\n", numero, i, numero * i);
	}
	return 0;
}