// 69) O mesmo exercício anterior, mas agora não será informado o número de mercadorias em estoque.
// Então o funcionamento deverá ser da seguinte forma: ler o valor da mercadoria e perguntar ‘MAIS
// MERCADORIAS (S/N)?’. Ao final, imprimir o valor total em estoque e a média de valor das
// mercadorias em estoque.

#include <stdio.h>

int main() {
    float valor_por_merc, soma = 0, contador = 0;
    char c = 's';

    while(c=='s' || c=='S'){
        printf("Digite o valor da mercadoria: ");
        scanf("%f", &valor_por_merc);
        contador++;
        soma = soma + valor_por_merc;

        printf("Mais mercadorias? (S/N)");
        scanf(" %c", &c);
        while(c!='s' && c!='S' && c!='n' && c!='N'){
            printf("Mais mercadorias? (S/N)");
            scanf(" %c", &c);
        }
    }

    printf("Valor total em estoque: %f", soma);
    printf("Média de valor das mercadorias: %.2f", soma/contador);
}