#include <stdio.h>

void verifica_resto(int x, int y) {
    printf("Numeros entre %d e %d que divididos por 13 deixam resto 5:\n", x, y);

    for (int i = x; i <= y; i++) {
        if (i % 13 == 5) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int x = 1;
    int y = 50;

    if (x < y) {
        verifica_resto(x, y);
    } else {
        printf("Erro: x deve ser menor que y.\n");
    }

    return 0;
}