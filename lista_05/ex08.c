#include <stdio.h>

int decrescentes (int n){
    if (n==0){
        printf("\n%d", n);
    }
    else {
        printf("\n%d", n);
        n--;
        decrescentes(n);
    }
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("Numeros em ordem decrescente:");
    decrescentes(n);
    printf("\n");

    return 0;
}