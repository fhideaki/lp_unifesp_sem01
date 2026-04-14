// 53) Ler um valor N e imprimir todos os valores inteiros entre 1 (inclusive) e N (inclusive). Considere
// que o N será sempre maior que ZERO.

#include <stdio.h>

int main() {
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        printf("%d\n", i);
    }
}