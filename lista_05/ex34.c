#include <stdio.h>

int inverterInteiro(int n, int acumulado) {
    if (n == 0) {
        return acumulado;
    }

    return inverterInteiro(n / 10, acumulado * 10 + (n % 10));
}

int main() {
    int numero;

    printf("Digite um numero inteiro para inverter: ");
    scanf("%d", &numero);

    if (numero == 0) {
        printf("O numero invertido e: 0\n");
        return 0;
    }

    // A chamada inicial sempre começa com o acumulado valendo 0
    int resultado = inverterInteiro(numero, 0);

    printf("O numero invertido e: %d\n", resultado);

    return 0;
}