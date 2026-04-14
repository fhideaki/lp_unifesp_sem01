// 67) Faça um algoritmo que calcule e escreva a média aritmética dos números inteiros entre 15
// (inclusive) e 100 (inclusive).

#include <stdio.h>

int main () {
    float soma = 0;

    for(int i=15; i<=100; i++){
        soma = soma+i;
    }
    printf("Média aritmética dos números entre 15 e 100: %f", soma/((100-15)+1));
}