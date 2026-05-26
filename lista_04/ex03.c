#include <stdio.h>

int potencia(int n1, int n2);

int main() {
    int n1 = 3, n2 = 4, n3;

    n3 = potencia(n1, n2);

    printf("O resultado de %d elevado a %d e %d\n", n1, n2, n3);

    return 0;
}

int potencia(int n1, int n2) {
    int resultado = 1;

    for (int i = 0; i < n2; i++) {
        resultado = n1 * resultado;
    }

    return resultado;
}