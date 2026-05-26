#include <stdio.h>

int divisao(int, int);

int main(){
    int n1 = 10, n2 = 2, n3 = 0;

    n3 = divisao(n1,n2);

    printf("O resultado da divisao de %d por %d é: %d", n1, n2, n3);

    return 0;
}

int divisao(int n1, int n2){
    // Declarando o resultado
    int resultado = 0;

    // Definindo o sinal
    int sinal = 1;

    if(n1<0){
        n1 = -1 * n1;
        sinal = -1 * sinal;
    }

    // Definindo o resto
    int resto = n1;

    if(n2<0){
        n2 = -1 * n2;
        sinal = -1 * sinal;
    }

    while(resto >= n2){
        n1 = n1 - n2;
        resultado += 1;
        resto = n1;
    }

    return resultado * sinal;
}