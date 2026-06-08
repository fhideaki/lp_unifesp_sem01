#include <stdio.h>

int tetranacci(int n) {
    if(n==0 || n==1 || n==2){
        return 0;
    }

    if(n==3){
        return 1;
    }

    else {
        return tetranacci(n-1) + tetranacci(n-2) + tetranacci(n-3) + tetranacci(n-4);
    }
}

int main() {
    int n;

    printf("Digite a posicao (n) da sequencia de Tetranacci: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, digite um numero maior ou igual a zero.\n");
        return 1;
    }

    printf("O valor de Tetranacci na posicao %d e: %d\n", n, tetranacci(n));

    return 0;
}