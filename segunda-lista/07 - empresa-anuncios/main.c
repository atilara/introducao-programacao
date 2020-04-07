#include <stdio.h>

int main() {
    int i, opcaoSelecionada[8];
    printf("Tipos de anúncio disponíveis:\n1 - FM\n2 - AM\n3 - TV (horário regular)\n4 - TV (horário nobre)\n5 - Revista\n6 - Outdoor\n");

    for (i = 0; i < 8; i++) {
        printf("Informe a opção de anúncio da %iª empresa: ", i+1);
        scanf("%i", &opcaoSelecionada[i]);
    }
    
    return 0;
}