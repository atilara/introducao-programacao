#include <stdio.h>
#include <math.h>

int main(void) {
	float a, b, c, delta, x1, x2;
  	printf("ax² + bx + c = 0\nInforme o 'a': ");
	scanf("%f", &a);
	printf("Informe o 'b': ");
	scanf("%f", &b);
	printf("Informe o 'c': ");
	scanf("%f", &c);
	printf("\n%.2fx² + %.2fx + %.2f = 0", a, b, c);
	delta = (b*b) - (4*a*c);
	printf("\nDelta é: %.2f\n\n", delta);
	if (delta < 0) {
		printf("Menor que zero, não possui raízes reais");
	} else if (delta == 0) {
		printf("Igual a zero, uma raíz real: %.2f", -b/(2*a));
	} else if (delta > 0) {
		x1 = ((-b) + sqrt(delta))/(2*(a));
		x2 = ((-b) - sqrt(delta))/(2*(a));
		printf("Maior que zero, duas raízes reais\nX1 (delta positivo): %.2f\nX2 (delta negativo): %.2f", x1, x2);
	}
  return 0;
}