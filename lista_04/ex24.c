#include <stdio.h>

int fatorial(int n) {
    int res = 1;
    for (int i = 2; i <= n; i++) {
        res = res * i;
    }
    return res;
}

int combinacao(int n, int r) {
    if (r == 0 || r == n) return 1;
    if (r > n) return 0;

    int numerador = fatorial(n);
    int denominador = fatorial(r) * fatorial(n - r);
    
    return numerador / denominador;
}

int main() {
    int n, r;

    printf("Digite n e r: ");
    scanf("%d %d", &n, &r);

    if (n >= r && n >= 0) {
        printf("Combinacao(%d, %d) = %d\n", n, r, combinacao(n, r));
    } else {
        printf("Valores invalidos.\n");
    }

    return 0;
}