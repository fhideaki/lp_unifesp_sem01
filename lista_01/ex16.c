#include <stdio.h>
#include <math.h>

// 16) Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste aluno.
// Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5. Fórmula para o cálculo da média
// final é:

// inicio
// 	real: np1, np2, np3;
// 	leia(np1);
// 	leia(np2);
// 	leia(np3);
// 	imprima(“Média Final: ”, ((np1*2) + (np2*3) + (np3*5))/10);
// fim

int main(){
    float np1, np2, np3;
    printf("Digite a nota da prova 1: ");
    scanf("%f", &np1);
    printf("Digite a nota da prova 2: ");
    scanf("%f", &np2);
    printf("Digite a nota da prova 3: ");
    scanf("%f", &np3);
    printf("Média Final: %.2f", ((np1*2) + (np2*3) + (np3*5))/10);

    return 0;
}