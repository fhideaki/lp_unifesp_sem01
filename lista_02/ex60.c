// 60) Ler 10 valores e escrever quantos desses valores lidos estão no intervalo [10,20] (inlcuindo os
// valores 10 e 20 no intervalo) e quantos deles estão fora deste intervalo.

#include <stdio.h>

int main () {
    int contador = 0, n;

    for(int i=0; i<10; i++){
        printf("Digite um número: ");
        scanf("%d", &n);
        if(n>=10 && n<=20){
            contador++;
        }
    }
    printf("Quantidade de números entre 10 e 20: %d", contador);
    printf("Quantidade de números fora do intervalo 10 a 20: %d", 10-contador);     
}