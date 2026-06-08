#include <stdio.h>

float fatorialQuadruplo(float n){
    if(n == 1){
        return 1;
    }
    else {
        return (4 * n - 2) * fatorialQuadruplo(n - 1);
    }
}

int main() {
    float n;

    printf("Digite um numero inteiro positivo (n): ");
    scanf("%f", &n);

    printf("O fatorial quadruplo de %.0f e: %.0f\n", n, fatorialQuadruplo(n));

    return 0;
}