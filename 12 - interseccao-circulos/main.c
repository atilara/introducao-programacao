#include <stdio.h>

int main(void) {
    float x1, y1, r1, x2, y2, r2, pitagoras;
    printf("Informe a posição do primeiro círculo no eixo x:");
    scanf("%f", &x1);
    printf("Informe a posição do primeiro círculo no eixo y:");
    scanf("%f", &y1);
    printf("Informe o raio do primeiro círculo: ");
    scanf("%f", &r1);
    printf("Informe a posição do segundo círculo no eixo x:");
    scanf("%f", &x2);
    printf("Informe a posição do segundo círculo no eixo y:");
    scanf("%f", &y2);
    printf("Informe o raio do segundo círculo: ");
    scanf("%f", &r2);
    pitagoras = ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));
    if (((r1+r2)*(r1+r2)) >= pitagoras) {
        printf("Existe uma intersecção");
    } else {
        printf("Não existe uma intersecção");
    }
    return 0;
}