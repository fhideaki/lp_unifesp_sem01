// 63) Escreva um algoritmo para ler 10 números e ao final da leitura escrever a soma total dos 10
// números lidos.

#include <stdio.h>

int main () {
    int n, total = 0;

    for(int i=0; i<10; i++){
        printf("Digite um número: ");
        scanf("%d", &n);
        total = total + n;
    }
    printf("Total: %d", total);
}