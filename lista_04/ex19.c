#include <stdio.h>

void converte_binario(int n) {
    int vetor[32];
    int i = 0;

    if (n == 0) {
        printf("0");
        return;
    }

    while (n > 0) {
        vetor[i] = n % 2; 
        n = n / 2;        
        i++;              
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", vetor[j]);
    }
    printf("\n");
}

int main() {
    int numero = 13;
    
    printf("O numero %d em binario e: ", numero);
    converte_binario(numero);
    
    return 0;
}