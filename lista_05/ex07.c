#include <stdio.h>

void crescentes(int n) {
    // Caso base
    if (n < 0){
        return;
    }

    crescentes(n - 1);

    printf("\n%d", n);
}   

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("Numeros em ordem crescente:");
    crescentes(n);
    printf("\n");

    return 0;
}