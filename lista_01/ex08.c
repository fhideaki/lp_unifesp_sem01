#include <stdio.h>
#include <math.h>

// 8) Faça um algoritmo que converta metros para centímetros. Lembrando que 1m = 100cm.

// inicio
//  real: nmetros, ncentimetros;
//  imprima(“Digite um número em metros: ”);
//  leia(nmetros);
//  ncentimetros = nmetros*100;
//  imprima(“O número ”, nmetros, “ em centímetros é: “, ncentimetros);
// fim

int main(){
    float nmetros;
    printf("Digite um número em metros: ");
    scanf("%f", &nmetros);
    printf("O número %.2f em centímetros é: %.2f cm.", nmetros, nmetros*100);

    return 0;
}
