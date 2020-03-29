#include <stdio.h>
//cade o comentário meu filho?
int main(void) {
	// criando a variavel de incremento
  	int i;
	//fazendo a iteração pelo for enquanto é percorrido
	for (i = 1; i<=1000; i++) {
		//no if compara se o i é par.
		if (i%2 == 0) {
			//printa na tela o que passou pela seleção.
			printf("%i\n", i);
		}
	}
}
