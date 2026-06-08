#include <stdio.h>

void inverteVetor(int v[], int inicio, int fim){
    
    if(inicio >= fim){
        return;
    }

    int temp = v[inicio];
    v[inicio] = v[fim];
    v[fim] = temp;

    inverteVetor(v, inicio + 1, fim - 1);
}

int main() {
    int tam;
    int vetor[100]; 

    printf("Digite o tamanho do vetor (maximo 100): ");
    scanf("%d", &tam);

    printf("Digite os %d elementos do vetor:\n", tam);
    for (int i = 0; i < tam; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    inverteVetor(vetor, 0, tam - 1);

    printf("\nVetor invertido: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}