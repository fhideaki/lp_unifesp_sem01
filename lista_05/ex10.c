#include <stdio.h>

void decrescente_par (int n){
    if (n==0){
        printf("\n%d", n);
    }
    else {
        printf("\n%d", n);
        n -= 2;
        decrescente_par(n);
    }
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo par: ");
    scanf("%d", &n);

    printf("Numeros em ordem decrescente:");
    decrescente_par(n);
    printf("\n");

    return 0;
}