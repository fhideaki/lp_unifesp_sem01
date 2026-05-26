#include <stdio.h>
#include <string.h>

void inverterString(int n) {
    char str[20];   
    char invertida[20];
    
    sprintf(str, "%d", n);
    
    int tamanho = strlen(str);
    int i;

    for (i = 0; i < tamanho; i++) {
        invertida[i] = str[tamanho - 1 - i];
    }
    
    invertida[tamanho] = '\0';

    printf("Original: %d\n", n);
    printf("Inverso: %s\n", invertida);
}

int main() {
    int numero = 1234;
    inverterString(numero);
    
    return 0;
}