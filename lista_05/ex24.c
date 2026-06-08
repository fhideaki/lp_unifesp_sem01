#include <stdio.h>

int tribonacci(int n) {
    if (n == 0){
        return 0;
    }

    if (n == 1){
        return 0;
    }

    if (n == 2) {
        return 1;
    }

    if (n > 2){
        return (tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3));
    }
}

int main() {
    int n;

    printf("Digite a posicao (n) da sequencia de Tribonacci: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, digite um numero maior ou igual a zero.\n");
        return 1;
    }

    printf("O valor de Tribonacci na posicao %d e: %d\n", n, tribonacci(n));

    return 0;
}