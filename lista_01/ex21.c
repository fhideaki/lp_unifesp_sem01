#include <stdio.h>
#include <math.h>

// 21) A equipe Red Bull Racing de Fórmula 1 deseja calcular o número mínimo de litros que deverá
// colocar no tanque de seu carro para que ele possa percorrer um determinado número de voltas até o
// primeiro reabastecimento. Escreva um programa que leia o comprimento da pista (em metros), o
// número total de voltas a serem percorridas no grande prêmio, o número de reabastecimentos
// desejados e o consumo de combustível do carro (em Km/L). Calcular e escrever o número mínimo de
// litros necessários para percorrer até o primeiro reabastecimento. Observação: Considere que o
// número de voltas entre os reabastecimentos é o mesmo.

// inicio
// 	inteiro: nvoltas, nabastecimentos;
// 	real:cpistam, consumo, disttotalkm, distparcialkm;
// 	imprima(“Insira o comprimento da pista em metros: ”);
// 	leia(cpistam);
// 	imprima(“Digite o número total de voltas do GP: ”);
// 	leia(nvoltas);	
// 	disttotalkm = (cpistam * nvoltas)/1000;
// imprima(“Insira quantas vezes deseja reabastecer: ”);
// 	leia(nabastecimentos);
// 	distparcialkm = disttotalkm/nabastecimentos;
// 	imprima(“Insira o consumo de combustível em Km/L: ”);
// 	leia(consumo);
// 	imprima(“Litros necessários até o primeiro reabastecimento: ”, distparcialkm/consumo, “ L”);
// fim

int main() {
    int nvoltas, nabastecimentos;
    float cpistam, consumo, disttotalkm, distparcialkm;
    printf("Insira o comprimento da pista em metros: ");
    scanf("%f", &cpistam);
    printf("Digite o número total de voltas do GP: ");
    scanf("%d", &nvoltas);
    disttotalkm = (cpistam * nvoltas)/1000.0;
    printf("Insira quantas vezes deseja reabastecer: ");
    scanf("%d", &nabastecimentos);
    distparcialkm = disttotalkm/(nabastecimentos + 1);
    printf("Insira o consumo de combustível em Km/L: ");
    scanf("%f", &consumo);
    printf("Litros necessários até o primeiro reabastecimento: %.2f", distparcialkm/consumo);

    return 0;
}