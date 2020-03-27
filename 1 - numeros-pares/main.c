#include <stdio.h>

int main(void) {
  int i;
	for (i = 1; i<=1000; i++) {
		if (i%2 == 0) {
			printf("%i\n", i);
		}
	}
}