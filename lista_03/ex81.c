// 81) O mesmo exercício anterior, mas agora deve escrever o menor elemento do vetor e a respectiva
// posição dele nesse vetor.

#include <stdio.h>

int main(){
    int Q[20], n, menor = 0, posicao = 0;

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

    menor = Q[0]; 
    
    for(int i=0; i<20; i++){
        if (Q[i] < menor){
            menor = Q[i];
            posicao = i;
        }
    }

    printf("\nMenor número: %d\n", menor);
    printf("Posição: %d\n", posicao);

    return 0;
}