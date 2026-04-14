#include <stdio.h>
#include <math.h>

// 9) Faça um algoritmo que calcule a área de um quadrado (lado*lado), em seguida mostre o dobro desta
// área para o usuário.

// inicio
//  real: lado, area;
//  imprima(“Digite a medida do lado do quadrado: ”);
//  leia(lado);
//  area = lado*lado;
//  imprima(“O dobro da área do quadrado de lado “, lado, “ é: “, area*2);
// fim

int main(){
    float lado, area;
    printf("Digite a medida do lado do quadrado: ");
    scanf("%f", &lado);
    area = lado*lado;
    printf("O dobro da área do quadrado de lado %.2f é: %.2f", lado, 2*area);

    return 0;
}