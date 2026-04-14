#include <stdio.h>
#include <math.h>

// 19) Escreva um programa para ler as dimensões de uma cozinha retangular (comprimento, largura e
// altura), calcular e escrever a quantidade de caixas de azulejos para se colocar em todas as suas
// paredes (considere que não será descontada a área ocupada por portas e janelas). Cada caixa de
// azulejos possui 1.5 m2

// inicio
// 	real: largura, comprimento, altura;
// 	imprima(“Insira a largura do cômodo: ”);
// 	leia(largura);
// 	imprima(“Insira o comprimento do cômodo: ”);
// 	leia(comprimento);	
// imprima(“Insira a altura do cômodo: ”);
// 	leia(altura);
// 	imprima(“Quantidade de caixas de azulejo necessárias: “, ((largura*altura*2) + (comprimento*altura*2))/1.5);
// fim

int main(){
    float altura, largura, comprimento;
    printf("Digite a altura do cômodo em metros: ");
    scanf("%f", &altura);
    printf("Digite a largura do cômodo em metros: ");
    scanf("%f", &largura);
    printf("Digite o comprimento do cômodo em metros: ");
    scanf("%f", &comprimento);
    printf("Quantidade de caixas de azulejo necessárias: %.0f", ceil(((largura*altura*2) + (comprimento*altura*2))/1.5));

    return 0;
}