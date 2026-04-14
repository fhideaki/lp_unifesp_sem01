// 68) Uma loja está levantando o valor total de todas as mercadorias em estoque. Escreva um algoritmo
// que permita a entrada das seguintes informações: a) o número total de mercadorias no estoque; b) o
// valor de cada mercadoria. Ao final imprimir o valor total em estoque e a média de valor das
// mercadorias.

#include <stdio.h>

int main() {
    int n_total_merc;
    float valor_por_merc, soma = 0;

    printf("Digite a quantidade total de mercadorias: ");
    scanf("%d", &n_total_merc);

    for(int i = 1; i <= n_total_merc; i++){
        printf("Digite o valor da mercadoria %d: ", i);
        scanf("%f", &valor_por_merc);
        soma = soma + valor_por_merc;
    }

    printf("Valor total em estoque: %f", soma);
    printf("Média de valor das mercadorias: %f", soma/n_total_merc);
}