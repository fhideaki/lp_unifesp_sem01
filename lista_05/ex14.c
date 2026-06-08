#include <stdio.h>

int soma_serie(int i, int j, int k){
    if(i == j){
        printf("%d ", j);
        return j;
    }
    else {
        printf("%d ", i);
        return (i + soma_serie(i + k, j, k));
    }
}

int main() {
    int valor_inicial, valor_final, incremento;

    printf("Digite o valor inicial (i): ");
    scanf("%d", &valor_inicial);

    printf("Digite o valor final (j): ");
    scanf("%d", &valor_final);

    printf("Digite o valor do incremento (k): ");
    scanf("%d", &incremento);

    printf("Sequencia gerada: ");
    int resultado = soma_serie(valor_inicial, valor_final, incremento);
    
    printf("\nO resultado da soma da serie e: %d\n", resultado);

    return 0;
}