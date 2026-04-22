// 83) Faça um algoritmo para ler 20 números e armazenar em um vetor. Após a leitura total dos 20
// números, o algoritmo deve escrever esses 20 números lidos na ordem inversa.

#include <stdio.h>

int main(){
    int Q[20], n;

    // Lendo o vetor
    for(int i=0; i<20; i++){
        printf("Digite o número para o índice %d: ", i);
        scanf("%d", &n);

        Q[i] = n;
    }

    for(int i=19; i>=0; i--){
        printf("%d\n", Q[i]);
    }

    return 0;
}