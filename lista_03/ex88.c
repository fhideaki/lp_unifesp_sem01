// 88) Faça um algoritmo para ler um vetor de 20 números. Após isto, deverá ser lido mais um número
// qualquer e verificar se esse número existe no vetor ou não. Se existir, o algoritmo deve gerar um novo
// vetor sem esse número. (Considere que não haverão números repetidos no vetor).

#include <stdio.h>

int main(){
    int A[20], n, X, X_no_vetor = 0;

    // Lendo o vetor
    for(int i=0; i<20; i++){
        printf("Digite o número para o índice %d: ", i);
        scanf("%d", &n);

        A[i] = n;
    }

    printf("Digite um número: ");
    scanf("%d", &X);    

    for(int i=0; i<20; i++){
        if(A[i] == X){
            X_no_vetor = 1;
        }
    }

    if(X_no_vetor == 1){
        int B[19];

        for(int i=0; i<20; i++){
            if(A[i]!=X){
                B[i] = A[i];
            }
        }
    }