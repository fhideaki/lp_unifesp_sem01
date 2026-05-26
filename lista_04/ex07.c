#include <stdio.h>
#include <string.h>

int ePalindromo(char frase[]) {
    char limpa[100];
    int j = 0;

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ') {
            limpa[j] = frase[i];
            j++;
        }
    }
    limpa[j] = '\0';

    int inicio = 0;
    int fim = strlen(limpa) - 1;

    while (fim > inicio) {
        if (limpa[inicio] != limpa[fim]) {
            return 0;
        }
        inicio++;
        fim--;
    }

    return 1;
}

int main() {
    char teste[] = "SOCORRAM ME SUBI NO ONIBUS EM MARROCOS";

    if (ePalindromo(teste)) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }

    return 0;
}