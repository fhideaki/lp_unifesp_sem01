#include <stdio.h>

int somaVetor(int v[], int tamanho){
    if(tamanho == 1){
        return v[0];
    }
    else {
        return v[tamanho - 1] + somaVetor(v, tamanho - 1); 
    }
}

int main() {
    int tam;
    int vetor[100];

    printf("Digite o tamanho do vetor (maximo 100): ");
    scanf("%d", &tam);

    if (tam > 100 || tam <= 0) {
        printf("Tamanho invalido. Por favor, escolha um valor entre 1 e 100.\n");
        return 1;
    }

    printf("Digite os %d elementos do vetor:\n", tam);
    for (int i = 0; i < tam; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int resultado = somaVetor(vetor, tam);
    printf("\nA soma de todos os elementos do vetor e: %d\n", resultado);

    return 0;
}