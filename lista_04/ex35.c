#include <stdio.h>

// strlen: Conta até achar o \0
int teste_strlen(char str[]) {
    int tam = 0;
    while (str[tam] != '\0') {
        tam++;
    }
    return tam;
}

// strcmp: Retorna 0 se forem iguais
int teste_strcmp(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] == s2[i]) {
        if (s1[i] == '\0') return 0;
        i++;
    }
    return s1[i] - s2[i];
}

// strncpy: Copia N caracteres
void teste_strncpy(char destino[], char origem[], int n) {
    int i;
    for (i = 0; i < n && origem[i] != '\0'; i++) {
        destino[i] = origem[i];
    }
    
    for (; i < n; i++) {
        destino[i] = '\0';
    }
}

// strcat: Vai até o fim da primeira e cola a segunda
void teste_strcat(char destino[], char origem[]) {
    int i = 0, j = 0;
    while (destino[i] != '\0') i++;
    
    while (origem[j] != '\0') {
        destino[i] = origem[j];
        i++;
        j++;
    }
    destino[i] = '\0';
}

// strfind: Procura substring dentro da string
void teste_strfind(char texto[], char busca[]) {
    int tamT = teste_strlen(texto);
    int tamB = teste_strlen(busca);

    for (int i = 0; i <= tamT - tamB; i++) {
        int j;
        for (j = 0; j < tamB; j++) {
            if (texto[i + j] != busca[j]) break;
        }
        if (j == tamB) {
            printf("Encontrado na posicao: %d\n", i);
        }
    }
}

int main() {
    char s1[50] = "Programando";
    char s2[] = "grama";

    printf("Tamanho: %d\n", teste_strlen(s1));
    teste_strfind(s1, s2);

    return 0;
}