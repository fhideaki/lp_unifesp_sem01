// 59) Ler 10 valores e escrever quantos desses valores lidos são NEGATIVOS.

#include <stdio.h>

int main () {
    int contador = 0, n;

    for(int i=0; i<10; i++){
        printf("Digite um número: ");
        scanf("%d", &n);
        if(n<0){
            contador++;
        }     
    }
    printf("Quantidade de números negativos: %d", contador);
}