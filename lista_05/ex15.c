#include <stdio.h>

float serie15(float n){
    if(n == 1) {
        return 2;
    }
    else {
        return (((1 + n*n) / n) + serie15(n-1));
    }
}

int main() {
    float n;

    printf("Digite um numero inteiro positivo (n): ");
    scanf("%f", &n);

    printf("O resultado da serie para n = %.0f e: %f\n", n, serie15(n));

    return 0;
}