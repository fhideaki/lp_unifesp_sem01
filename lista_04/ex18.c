#include <stdio.h>

int soma_intervalo(int a, int b) {
    int soma = 0;

    for (int i = a; i <= b; i++) {
        soma = soma + i;
    }

    return soma;
}

int main() {
    int a = 5;
    int b = 10;
    
    int resultado = soma_intervalo(a, b);
    
    printf("A soma de todos os numeros entre %d e %d e: %d\n", a, b, resultado);
    
    return 0;
}