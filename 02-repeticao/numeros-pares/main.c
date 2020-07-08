#include <stdio.h>
/* 
Crie um programa que imprima todos os valores pares de 1 a 1000 (1000 incluso)
*/
int main(void) {
  	int i;
	for (i = 1; i<=1000; i++) {
		if (i%2 == 0) {
			printf("%i\n", i);
		}
	}
}