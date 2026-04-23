// 89) Faça um algoritmo para ler dois vetores V1 e V2 de 15 números cada. Calcular e escrever a
// quantidade de vezes que V1 e V2 possuem os mesmos números e nas mesmas posições.

#include <stdio.h>

int main(){
    int V1[15], V2[15], n, repetidos = 0;

    // Lendo os vetores
    for(int i=0; i<15; i++){
        printf("Digite um número para o índice %d do vetor 1: ", i);
        scanf("%d", &n);

        V1[i] = n;
    }

    for(int i=0; i<15; i++){
        printf("Digite um número para o índice %d do vetor 2: ", i);
        scanf("%d", &n);

        V2[i] = n;

        if(V2[i]==V1[i]){
            repetidos++;
        }
    }  

    printf("\nV1 e V2 tem os mesmos números e nas mesmas posições %d vezes.\n", repetidos);

    return 0;
}