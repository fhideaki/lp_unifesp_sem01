// 56) Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever a tabuada de 1 a 10 do valor
// lido.

#include <stdio.h>

int main() {
    int n;

    printf("Digite um número de 1 a 10: ");
    scanf("%d", &n);
    while(n<1 || n>10){
        printf("Digite um número de 1 a 10: ");
        scanf("%d", &n);
    }
    for(int i=1; i<11; i++){
        printf("%d x %d = %d\n", i, n, i*n);
    }
}