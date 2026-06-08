#include <stdio.h>

int fatorialDuplo(int n) {
    if(n == 1){
        return 1;
    }
    else {
        return (n * fatorialDuplo(n-2));
    }
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo impar (n): ");
    scanf("%d", &n);

    printf("O fatorial duplo de %d e: %d\n", n, fatorialDuplo(n));

    return 0;
}