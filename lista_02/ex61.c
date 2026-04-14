// 61) Ler 10 valores, calcular e escrever a média aritmética desses valores lidos.

#include <stdio.h>

int main () {
    float contador = 0, n;

    for(int i=0; i<10; i++){
        printf("Digite um número: ");
        scanf("%f", &n);
        contador = contador + n; 
    }
    printf("Média: %f", contador/10);
}