#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

// 17) Escreva um programa para ler o raio de um círculo, calcular e escrever a sua área.

// inicio
// 	real: raio;
// 	imprima(“Insira o raio do círculo: ”);
// 	leia(raio);
// 	imprima(“Área do círculo: ”, 3.14*raio*raio);
// fim

int main(){
    float raio;
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    printf("Área do círculo: %.2f", M_PI*raio*raio);

    return 0;
}