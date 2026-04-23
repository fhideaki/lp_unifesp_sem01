// 90) Faça um algoritmo para ler um vetor de 30 números. Após isto, ler mais um número qualquer,
// calcular e escrever quantas vezes esse número aparece no vetor.

#include <stdio.h>

int main(){
    int v[30], n, X, contador = 0;

    // Lendo o vetor
    for(int i=0; i<30; i++){
        printf("Digite um número para o índice %d do vetor 1: ", i);
        scanf("%d", &n);

        v[i] = n;
    }

    // Lendo um número qualquer
    printf("Digite um número: ");
    scanf("%d", &X);

    for(int i=0; i<30; i++){
        if(v[i]==X){
            contador++;
        }
    }

    printf("\nO número %d aparece %d vezes no vetor.\n", X, contador);

    return 0;
}