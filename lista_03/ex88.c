// 88) Faça um algoritmo para ler um vetor de 20 números. Após isto, deverá ser lido mais um número
// qualquer e verificar se esse número existe no vetor ou não. Se existir, o algoritmo deve gerar um novo
// vetor sem esse número. (Considere que não haverão números repetidos no vetor).

#include <stdio.h>

int main(){
    int A[20], n, X, X_no_vetor = 0, posicao;

    // Lendo o vetor
    for(int i=0; i<20; i++){
        printf("Digite o número para o índice %d: ", i);
        scanf("%d", &n);

        A[i] = n;
    }

    // Lendo o número
    printf("Digite um número: ");
    scanf("%d", &X);    

    // Verificando se o número X está no vetor
    for(int i=0; i<20; i++){
        if(A[i] == X){
            X_no_vetor = 1;
            posicao = i;
        }
    }

    // Se X estiver no vetor
    if(X_no_vetor == 1){
        int B[19];
        int j = 0;

        for(int i=0; i<20; i++){
            if(i != posicao){
                B[j]=A[i];
                j++;
            }
        }

        printf("Novo vetor sem o número %d:", X);
        for(int i=0; i<19; i++){
            printf("%d", B[i]);
        }
    } else {
        printf("O número %d não existe no vetor.");
    }
}