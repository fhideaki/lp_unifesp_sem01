#include <stdio.h>

int kn(int k, int n) {
    if (n == 1) {
        return k;
    }
    else {
        return (k * kn(k, n - 1));
    } 
}

int main() {
    int k, n;

    printf("Digite o valor da base (k): ");
    scanf("%d", &k);

    printf("Digite o valor do expoente positivo (n): ");
    scanf("%d", &n);

    printf("O resultado de %d elevado a %d e: %d\n", k, n, kn(k, n));

    return 0;
}