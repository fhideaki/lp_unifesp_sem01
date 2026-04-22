// 79) Escreva um algoritmo que permita a leitura das notas de uma turma de 20 alunos. Calcular a média
// da turma e contar quantos alunos obtiveram nota acima desta média calculada. Escrever a média da
// turma e o resultado da contagem.

#include <stdio.h>

int main(){
    int notas[20], nota, contagem = 0, soma = 0;
    float media;

    for(int i=0; i<20; i++){
        nota = 0;
        printf("Digite a nota do aluno %d: ", (i + 1));
        scanf("%d", &nota);
        notas[i] = nota;
    }

    for(int i=0; i<20; i++){
        soma = soma + notas[i];
    }

    media = soma/20.0;

    for(int i=0; i<20; i++){
        if (notas[i]>media){
        contagem++;
        }
    }
    printf("\nMédia: %.2f\n", media);
    printf("Alunos acima da média: %d\n", contagem);

    return 0;
}