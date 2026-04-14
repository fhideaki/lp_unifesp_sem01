// 65) Ler 2 valores, calcular e escrever a soma dos inteiros existentes entre os 2 valores lidos (incluindo
// os valores lidos na soma). Considere que o segundo valor lido será sempre maior que o primeiro valor
// lido.

#include <stdio.h>

int main () {
    int n1, n2, soma = 0;

    printf("Digite um número: ");
    scanf("%d", &n1);
    
    printf("Digite outro número: ");
    scanf("%d", &n2);

    for(n1; n1<=n2; n1++){
        soma = soma + n1;
    }
    printf("Total: %d", soma);
}