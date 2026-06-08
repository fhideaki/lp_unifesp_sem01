#include <stdio.h>

void paraBinario(int n){
    if(n==0){
        printf("%d", 0);
        return;
    }

    paraBinario(n/2);

    printf("%d", n%2);
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, digite um numero maior ou igual a zero.\n");
        return 1;
    }

    printf("O numero %d em binario e: ", n);
    paraBinario(n);
    printf("\n");

    return 0;
}