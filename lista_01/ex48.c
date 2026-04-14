#include <stdio.h>
#include <math.h>

// 48) Escreva um programa que leia as notas das duas avaliações normais e a nota da avaliação
// optativa. Caso o aluno não tenha feito a optativa deve ser fornecido o valor –1. Calcular a média
// do semestre considerando que a prova optativa substitui a nota mais baixa entre as duas primeiras
// avaliações. Escrever a média e mensagens que indiquem se o aluno foi aprovado, reprovado ou
// está em exame, de acordo com as informações abaixo:
// Aprovado : media >= 6.0
// Reprovado: media < 3.0
// Exame : media >= 3.0 e < 6.0

// inicio
// 	real: np1, np2, npoptativa, media;
// 	imprima(“Digite a nota da prova 1: ”);
// 	leia(np1);
// 	imprima(“Digite a nota da prova 2: ”);
// 	leia(np2);
// 	imprima(“Digite a nota da prova optativa (se o aluno não fez, a nota é -1): ”);
// 	leia(npoptativa);
// 	se(npoptativa > np1)
// 		se(np1>=np2)
// 			np2 = npoptativa;
// 		senao
// 			np1 = npoptativa;
// 	senao
// 		se(npoptativa>np2)
// 			np2 = npoptativa
// 		fimse
// 	fimse
// 	media = (np1 + np2) / 2

// 	se(media >= 6)
// 		imprima(“Aprovado”)
// 	senao
// 		se(media >= 3 E media < 6)
// 			imprima(“Exame”)
// 		senao
// 			imprima(“Reprovado”)
// 		fimse
// 	fimse	
// fim

int main(){
    float np1, np2, optativa, media;
    printf("Digite a nota da prova 1: ");
    scanf("%f", &np1);
    printf("Digite a nota da prova 2: ");
    scanf("%f", &np2);
    printf("Digite a nota da prova optativa (se o aluno não fez, digite -1): ");
    scanf("%f", &optativa);
    if(optativa>np1){
        if(np1>=np2){
            np2 = optativa;
        }
        else {
            np1 = optativa;
        }
    }
    else{
        if(optativa>np2){
            np2 = optativa;
        }
    }
    media = (np1+np2)/2;

    if(media>=6){
        printf("Aprovado.");
    }
    else{
        if(media>=3 && media<6){
            printf("Exame.");
        }
        else{
            printf("Reprovado.");
        }
    }
    return 0;
}