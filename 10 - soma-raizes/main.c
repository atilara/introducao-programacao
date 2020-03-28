#include <stdio.h>
#include <math.h>

int main(void) {
	int n, i;
	float soma = 0;
  	printf("Informe o número 'n': ");
	scanf("%i", &n);
	while (n < 0) {
		printf("Informe um número positivo para 'n': ");
		scanf("%i", &n);
	}
	for (i = 1; i <= n; i++) {
	  soma += sqrt(i);
	}
	printf("O resultado da soma das raízes é: %.2f", soma);
  return 0;
}