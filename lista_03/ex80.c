// 80) Ler um vetor Q de 20 posições (aceitar somente números positivos). Escrever a seguir o valor do
// maior elemento de Q e a respectiva posição que ele ocupa no vetor.

#include <stdio.h>

int main(){
    int Q[20], n, maior = 0, posicao = 0;

    // Lendo o vetor
    for(int i=0; i<20; i++){
        printf("Digite o número para o índice %d: ", i);
        scanf("%d", &n);

        while(n<1){
            printf("Digite o número para o índice %d: ", i);
            scanf("%d", &n);            
        }

        Q[i] = n;
    }

    maior = Q[0]; 
    
    for(int i=0; i<20; i++){
        if (Q[i] > maior){
            maior = Q[i];
            posicao = i;
        }
    }

    printf("\nMaior número: %d\n", maior);
    printf("Posição: %d\n", posicao);

    return 0;
}