#include <stdio.h>

int fibonacci(int n) {
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else if (n > 1){
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
    
    return 0; // Retorno padrão de segurança caso n seja negativo
}

int main() {
    int n;

    printf("Digite a posicao (n) da Sequencia de Fibonacci: ");
    scanf("%d", &n);
    
    printf("O termo na posicao %d e: %d\n", n, fibonacci(n));

    return 0;
}