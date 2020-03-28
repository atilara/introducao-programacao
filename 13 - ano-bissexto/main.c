#include <stdio.h>

int main(void) {
	int ano;
	printf("Informe o valor do ano: ");
	scanf("%i", &ano);
	if ((ano % 400 == 0 || ano % 100 != 0) && ano % 4 == 0) {
		printf("É bissexto");
	} else {
		printf("Não é bissexto");
	}
	return 0;
}