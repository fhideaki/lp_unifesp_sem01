#include <stdio.h>

int ncubos(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return ((n * n * n) + ncubos(n - 1));
    }
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("A soma dos cubos de 1 ate %d e: %d\n", n, ncubos(n));

    return 0;
}