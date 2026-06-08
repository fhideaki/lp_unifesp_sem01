#include <stdio.h>

int sequencia21(int n){
    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 2;
    }
    else {
        return (2 * sequencia21(n-1) + 3 * sequencia21(n-2));
    }
}

int main() {
    int n;

    printf("Digite a posicao (n) desejada na sequencia: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, digite um numero maior que zero.\n");
        return 1;
    }

    printf("O valor na posicao %d e: %d\n", n, sequencia21(n));

    return 0;
}