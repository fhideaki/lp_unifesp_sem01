#include <stdio.h>

void imprime_divisores(int n) {
    printf("Divisores de %d: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    imprime_divisores(28);
    return 0;
}