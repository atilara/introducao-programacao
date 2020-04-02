#include <stdio.h>

int main(void) {
	int ano;
	printf("Informe o valor do ano: ");
	scanf("%i", &ano);
	// verifica matematicamente se o ano é bissexto, caso seja divisível por 400, 
	// mesmo que seja divisível por 100, será bissexto, caso não seja divísivel por 400, mas seja por 100
	// não será bissexto.
	if ((ano % 400 == 0 || ano % 100 != 0) && ano % 4 == 0) {
		printf("É bissexto");
	} else {
		printf("Não é bissexto");
	}
	return 0;
}