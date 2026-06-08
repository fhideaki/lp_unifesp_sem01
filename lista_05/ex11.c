#include <stdio.h>
#include <stdlib.h>

void imprime_array (int v[], int tamanho) {

    if (tamanho == 0) {
        return;
    }

    imprime_array(v, tamanho-1);

    printf("%d ", v[tamanho-1]);
} 

int main() {
    int vetor[100];

    printf("Digite os %d elementos do vetor:\n", 100);
    for (int i = 0; i < 100; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Exibe o resultado da função
    printf("\nElementos do vetor: ");
    imprime_array(vetor, 100);
    printf("\n");

    return 0;
}