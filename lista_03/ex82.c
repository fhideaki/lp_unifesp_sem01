// 82) Ler um vetor A de 10 números. Após, ler mais um número e guardar em uma variável X.
// Armazenar em um vetor M o resultado de cada elemento de A multiplicado pelo valor X. Logo após,
// imprimir o vetor M.

#include <stdio.h>

int main(){
    int A[10], n, X, M[10];

    // Lendo o vetor
    for(int i=0; i<10; i++){
        printf("Digite o número para o índice %d: ", i);
        scanf("%d", &n);

        A[i] = n;
    }

    printf("Digite o número multiplicador: ");
    scanf("%d", &X);
    
    for(int i=0; i<10; i++){
        M[i] = A[i] * X;
    }

    for(int i=0; i<10; i++){
    printf("\nVetor multiplicado: A[%d] * %d = M[%d] \n", i, X, M[i]);
    }
    return 0;
}