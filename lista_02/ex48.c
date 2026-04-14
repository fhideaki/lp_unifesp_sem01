// 48) Escreva um algoritmo para ler as notas da 1a. e 2a. avaliações de um aluno, calcule e imprima a
// média (simples) desse aluno. Só devem ser aceitos valores válidos durante a leitura (0 a 10) para cada
// nota.

#include <stdio.h>

int main (){
    float np1, np2;

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &np1);
    while(np1<0 || np1>10){
        printf("Digite uma nota válida (de 0 a 10): ");
        scanf("%f", &np1);
    }
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &np2);
    while(np2<0 || np2>10){
        printf("Digite uma nota válida (de 0 a 10): ");
        scanf("%f", &np2);
    }
    printf("Média: %.2f", (np1+np2)/2);
}