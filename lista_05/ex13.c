#include <stdio.h>

int soma_serie(int i, int j, int k){
    if(i == j){
        return j;
    }
    else {
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

    // Exibe o resultado da função
    printf("O resultado da soma da serie e: %d\n", soma_serie(valor_inicial, valor_final, incremento));

    return 0;
}