// 44) Escreva um algoritmo para ler 2 valores e se o segundo valor informado for ZERO, deve ser lido
// um novo valor, ou seja, para o segundo valor não pode ser aceito o valor zero e imprimir o resultado
// da divisão do primeiro valor lido pelo segundo valor lido. (utilizar a estrutura REPITA).
#include <stdio.h>

int main (){
    float n1, n2;

    printf("Digite um número para o numerador: ");
    scanf("%f", &n1);
    printf("Digite um número para o denominador: ");
    scanf("%f", &n2);
    if(n2==0){
        printf("O denominador não pode ser zero, digite outro número: ");
        scanf("%f", &n2);
    }
    printf(".2%f", n1/n2);
}