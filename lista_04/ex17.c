#include <stdio.h>

void imprime_romano(int n) {
    // Milhares
    int m = n / 1000;
    for (int i = 0; i < m; i++) printf("M");

    // Centenas
    int c = (n % 1000) / 100;
    if (c == 9) printf("CM");
    else if (c >= 5) {
        printf("D");
        for (int i = 0; i < c - 5; i++) printf("C");
    }
    else if (c == 4) printf("CD");
    else {
        for (int i = 0; i < c; i++) printf("C");
    }

    // Dezenas
    int d = (n % 100) / 10;
    if (d == 9) printf("XC");
    else if (d >= 5) {
        printf("L");
        for (int i = 0; i < d - 5; i++) printf("X");
    }
    else if (d == 4) printf("XL");
    else {
        for (int i = 0; i < d; i++) printf("X");
    }

    // Unidades
    int u = n % 10;
    if (u == 9) printf("IX");
    else if (u >= 5) {
        printf("V");
        for (int i = 0; i < u - 5; i++) printf("I");
    }
    else if (u == 4) printf("IV");
    else {
        for (int i = 0; i < u; i++) printf("I");
    }
    
    printf("\n");
}

int main() {
    int numero = 23;
    printf("O numero %d em romano e: ", numero);
    imprime_romano(numero);
    return 0;
}