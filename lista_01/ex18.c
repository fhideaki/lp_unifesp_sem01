#include <stdio.h>
#include <math.h>

// 18) Escreva um programa para calcular e imprimir o número de lâmpadas necessárias para iluminar
// um determinado cômodo de uma residência. Dados de entrada: a potência da lâmpada utilizada (em
// watts), as dimensões (largura e comprimento, em metros) do cômodo. Considere que a potência
// necessária é de 18 watts por metro quadrado.

// inicio
// 	inteiro: potencia;
// 	real: largura, comprimento;
// 	imprima(“Insira a potência da lâmpada em Watts: ”);
// 	leia(potencia);
// 	imprima(“Insira a largura do cômodo: ”);
// 	leia(largura);
// 	imprima(“Insira o comprimento do cômodo: ”);
// 	leia(comprimento);
// 	imprima(“Número de lâmpadas necessárias: “, (18*largura*comprimento)/potencia);
// fim

int main(){
    float potencia, largura, comprimento;
    printf("Digite a potência da lâmpada em Watts(W): ");
    scanf("%f", &potencia);
    printf("Digite a largura do cômodo em metros: ");
    scanf("%f", &largura);
    printf("Digite o comprimento do cômodo em metros: ");
    scanf("%f", &comprimento);
    printf("Número de lâmpadas necessárias: %.0f", ceil((18*largura*comprimento)/potencia));

    return 0;
}