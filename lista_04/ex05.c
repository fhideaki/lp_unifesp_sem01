#include <stdio.h>

int eprimo(int n) {
    if (n < 2) return 0;

    int primo = 1; 
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            primo = 0; 
            break;     
        }
    }

    return primo;
}

int main() {
    int numero = 7;

    if (eprimo(numero)) {
        printf("O numero %d e primo.\n", numero);
    } else {
        printf("O numero %d nao e primo.\n", numero);
    }

    return 0;
}