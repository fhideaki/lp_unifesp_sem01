// 57) Reescreva o exercício 50 utilizando a estrutura REPITA e um CONTADOR.// 
// 50) Escreva um algoritmo para imprimir os números de 1 (inclusive) a 10 (inclusive) em ordem
// crescente.

#include <stdio.h>

int main() {
    int contador = 1;

    for(contador; contador<11; contador++){
        printf("%d\n", contador);
    }
}