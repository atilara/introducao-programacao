#include <stdio.h>

int main(void) {
    float media, notas[4], pesos[4];
    int i;
    
    for (i = 0; i < 4; i++) {
        printf("Informe a %iª nota: ", i+1);
        scanf("%f", &notas[i]);
        printf("Informe o peso da %iª nota: ", i+1);
        scanf("%f", &pesos[i]);
    }

    media = ((notas[0] * pesos[0]) + (notas[1] * pesos[1]) + (notas[2] * pesos[2]) + (notas[3] * pesos[3])) / (pesos[0] + pesos[1] + pesos[2] + pesos[3]);
    
    printf("Média: %.2f\n", media);
    if (media < 5) {
        printf("Você está reprovado!");
    } else if (media >= 5 && media < 7) {
        printf("Você deve fazer uma prova de recuperação!");
    } else if (media >= 7) {
        printf("Você está aprovado!");
    }
    return 0;
}