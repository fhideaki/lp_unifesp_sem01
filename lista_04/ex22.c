#include <stdio.h>

int quadrado_maior(int n) {
    int resultado = 1;

    while (resultado * resultado <= n) {
        resultado++;
    }

    return resultado;
}

int main() {
    int n = 10;
    int res = quadrado_maior(n);

    printf("O menor numero cujo quadrado e maior que %d e: %d\n", n, res);

    return 0;
}