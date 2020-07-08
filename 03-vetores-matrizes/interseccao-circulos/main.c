#include <stdio.h>

int main(void) {
    float x[2], y[2], r[2], pitagoras;
    int i;
    // Recebe as informações necessárias para o cálculo em seus respectivos vetores utilizando um loop, reduzindo a quantidade de linhas utilizadas no código anterior
    for (i = 0; i < 2; i++) {
		printf("Informe a posição do %iº círculo no eixo x:", i+1);
		scanf("%f", &x[i]);
	    printf("Informe a posição do %iº círculo no eixo y:", i+1);
		scanf("%f", &y[i]);
		printf("Informe o raio do %iº círculo: ", i+1);
    	scanf("%f", &r[i]);
	}
    // realiza o cálculo do lado direito da inequação utilizando uma variável de apoio, o resto do cálculo é feito no if statement
    pitagoras = ((x[1]-x[0])*(x[1]-x[0])) + ((y[1]-y[0])*(y[1]-y[0]));
    if (((r[0]+r[1])*(r[0]+r[1])) >= pitagoras) {
        printf("Existe uma intersecção");
    } else {
        printf("Não existe uma intersecção");
    }
    return 0;
}