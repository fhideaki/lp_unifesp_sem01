// 62) Ler o número de alunos existentes em uma turma e, após isto, ler as notas destes alunos, calcular e
// escrever a média aritmética dessas notas lidas.

#include <stdio.h>

int main () {
    int qtde_alunos;
    float nota_indv, nota_total = 0;

    printf("Digite a quantidade de alunos na turma: ");
    scanf("%d", &qtde_alunos);

    for(int i=1; i<=qtde_alunos; i++){
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota_indv);
        nota_total = nota_total + nota_indv;
    }
    printf("Média: %.2f", nota_total/qtde_alunos);
}