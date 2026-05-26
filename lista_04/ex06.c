#include <stdio.h>

int fatorial(int n) {
    if (n <= 1) return 1;

    int resultado = 1;

    for (int i = n; i > 1; i--) {
        resultado = resultado * i;
    }

    return resultado;
}

int main() {
    int numero = 5;
    int res = fatorial(numero);

    printf("O fatorial de %d e %d\n", numero, res);

    return 0;
}