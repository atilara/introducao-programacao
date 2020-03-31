#include <stdio.h>

int main(void) {
	int i;
	for (i = 1; i<=100; i++) {
		if (i%3 == 0 && i%5 == 0) {
			printf("TicTac\n");	
		} else if (i%3 == 0) {
			printf("Tic\n");
		} else if (i%5 == 0) {
			printf("Tac\n");
		} else {
			printf("%i\n", i);
		}
	}
}