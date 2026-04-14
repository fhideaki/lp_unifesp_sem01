// 45) Reescreva o exercício anterior utilizando a estrutura ENQUANTO.
#include <stdio.h>

int main (){
    float n1, n2;

    printf("Digite um número para o numerador: ");
    scanf("%f", &n1);
    printf("Digite um número para o denominador: ");
    scanf("%f", &n2);
    while(n2==0){
        printf("O denominador não pode ser zero, digite outro número: ");
        scanf("%f", &n2);
    }
    printf("%.2f", n1/n2);
}