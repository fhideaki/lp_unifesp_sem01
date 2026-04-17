#include <stdio.h>

int main() {
    int matriz[3][4], soma_linha, soma_vetor=0, vetor_soma_linha[3];

    // Preenchendo a matriz
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("Digite o número para a linha %d, coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Somando cada linha da matriz
    for(int i=0; i<3; i++){
        soma_linha = 0;
        for(int j=0; j<4; j++){
            soma_linha = soma_linha + matriz[i][j];
        }
        printf("\nValor da soma da linha %d: %d", i, soma_linha);
        vetor_soma_linha[i] = soma_linha;
    }

    // Somando os valores do vetor
    for(int i=0; i<3; i++){
        soma_vetor = soma_vetor + vetor_soma_linha[i];
    }

    printf("\nSoma dos valores do vetor: %d", soma_vetor);
}