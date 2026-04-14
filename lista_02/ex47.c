// 47) Acrescentar uma mensagem de 'VALOR INVÁLIDO' no exercício [45] caso o segundo valor
// informado seja ZERO.

#include <stdio.h>

int main (){
    float n1, n2;

    printf("Digite um número para o numerador: ");
    scanf("%f", &n1);
    printf("Digite um número para o denominador: ");
    scanf("%f", &n2);
    while(n2==0){
        printf("Valor inválido!\n");
        printf("O denominador não pode ser zero, digite outro número: ");
        scanf("%f", &n2);
    }
    printf(".2%f", n1/n2);
}