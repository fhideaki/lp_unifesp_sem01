#include <stdio.h>

int multip_rec(int n1, int n2){
    // Caso trivial
    if (n1 == 1){
        return n2;
    }
    else {
        return n2 + multip_rec((n1 - 1), n2);
    }
}

int main() {
    int num1, num2;

    printf("Digite o primeiro numero inteiro positivo (n1): ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro (n2): ");
    scanf("%d", &num2);

    printf("O resultado da multiplicacao %d x %d e: %d\n", num1, num2, multip_rec(num1, num2));

    return 0;
}