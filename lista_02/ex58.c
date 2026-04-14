// 58) Reescreva o exercício 51 utilizando a estrutura ENQUANTO e um CONTADOR.
// 51) Escreva um algoritmo para imprimir os números de 1 (inclusive) a 10 (inclusive) em ordem
// decrescente.

#include <stdio.h>

int main() {
    int contador = 10;

    while(contador>0){
        printf("%d\n", contador);
        contador--;
    }
}