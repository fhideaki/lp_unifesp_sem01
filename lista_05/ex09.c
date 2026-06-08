#include <stdio.h>

void crescente_par(int n) {
    if (n < 0) {
        return;
    }

    crescente_par(n - 2);

    printf("\n%d ", n);
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("Numeros em ordem crescente:");
    crescente_par(n);
    printf("\n");

    return 0;
}