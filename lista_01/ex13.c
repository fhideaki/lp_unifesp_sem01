#include <stdio.h>
#include <math.h>

// 13) O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do
// distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor
// seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro,
// calcular e escrever o custo final ao consumidor.

// inicio
// 	real: custofabrica;
// 	imprima(“Digite o custo de fábrica: ”);
// 	leia(custofabrica);
// 	imprima(“Percentual do distribuidor (28%): “, custofabrica*0.28);
// 	imprima(“Impostos (45%): “, custofabrica*0.45);
// 	imprima(“Valor Final (Custo de fábrica, impostos e percentual do distribuidor): “, custofabrica*(0.28+0.45+1));
// fim

int main(){
    float custofabrica;
    printf("Digite o custo de fábrica: R$ ");
    scanf("%f", &custofabrica);
    printf("Percentual do distribuidor (28%): R$ %.2f\n", custofabrica*0.28);
    printf("Impostos (45%): R$ %.2f\n", custofabrica*0.45);
    printf("Valor Final (Custo de fábrica, impostos e percentual do distribuidor): R$ %.2f", custofabrica*(0.28+0.45+1));

    return 0;
}