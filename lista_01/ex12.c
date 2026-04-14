#include <stdio.h>
#include <math.h>

// 12) Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste.
// Calcular e escrever o valor do novo salário.

// inicio
// 	real: salario, reajuste;
// 	imprima(“Digite o salário atual: ”);
// 	leia(salario);
// 	imprima(“Digite o reajuste (em porcentagem): “);
// 	leia(reajuste);
// 	imprima(“Salário reajustado: “, salario*(1+(reajuste/100)));
// fim

int main(){
    float salario, reajuste;
    printf("Digite o salário atual: R$ ");
    scanf("%f", &salario);
    printf("Digite o reajuste (em porcentagem): ");
    scanf("%f", &reajuste);
    printf("Salário reajustado: R$ %.2f", salario*(1+(reajuste/100.0)));

    return 0;
}