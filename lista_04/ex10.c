#include <stdio.h>

int eprimo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int qtde_primo(int n1, int n2) {
    int resultado = 0;

    for (int i = n1; i <= n2; i++) {
        if (eprimo(i) == 1) {
            resultado++;
        }
    }

    return resultado;
}

int main() {
    int inicio = 10;
    int fim = 20;
    int total;

    total = qtde_primo(inicio, fim);

    printf("Existem %d numeros primos entre %d e %d.\n", total, inicio, fim);

    return 0;
}