#include <stdio.h>

// Função que encontra e retorna o menor elemento do vetor
int imprime_array (int v[], int tamanho) {

    if (tamanho == 1) {
        return v[tamanho - 1];
    }
    
    int menor = imprime_array(v, tamanho - 1);

    if (v[tamanho - 1] < menor) {
        return v[tamanho - 1];
    }
    else {
        return menor;
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

    // Captura o menor valor retornado pela função
    int menor_valor = imprime_array(vetor, tam);

    // Exibe o resultado correto na tela
    printf("\nO menor elemento do vetor e: %d\n", menor_valor);

    return 0;
}