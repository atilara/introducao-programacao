#include <stdio.h>

int main(void) {
	int n , m, i;
  	printf("Informe o valor de N: ");
	scanf("%i", &n);
	printf("Informe o valor de M: ");
	scanf("%i", &m);
	for (i = 1; i <= m + 1; i++) {
		printf("%i ", i - 1);
		if (i % n == 0)
			printf("\n");
	}
	
  	return 0;
}