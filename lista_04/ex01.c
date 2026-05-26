#include <stdio.h>

int multiplicacao(int, int);

int main(){
    int n1=5, n2=8, n3 = 0;

    n3 = multiplicacao(n1, n2);

    printf("O resultado da multiplicação de %d e %d é: %d", n1, n2, n3);

    return 0;
}

int multiplicacao(int n1, int n2){

    // Resultado final a ser retornado
    int resultado = 0;

    // Variável para saber se o número final é negativo ou não
    int sinal = 1;

    // Se o n1 for negativo, o sinal precisa ser negativo
    if(n1<0){
        n1 = -1 * n1;
        sinal = -1 * sinal;
    }

    // Se o n2 for negativo, troca o sinal novamente
    if(n2<0){
        n2 = -1 * n2;
        sinal = -1 * sinal;
    }

    for(int i = 0; i < n1; i++){
        resultado += n2;
    }

    // Aplicando o sinal

    return resultado * sinal;
}