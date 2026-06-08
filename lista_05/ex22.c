#include <stdio.h>

int sequenciaFibonacci(int n){
    if (n==0){
        return 0;
    }

    if (n==1){
        return 1;
    }

    if (n>1){
        return (sequenciaFibonacci(n-1) + sequenciaFibonacci(n-2));
    }
}

int main() {
    int n;

    printf("Digite a posicao (n) da sequencia de Fibonacci: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, digite um numero maior ou igual a zero.\n");
        return 1;
    }

    printf("O valor de Fibonacci na posicao %d e: %d\n", n, sequenciaFibonacci(n));

    return 0;
}