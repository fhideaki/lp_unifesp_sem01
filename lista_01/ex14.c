#include <stdio.h>
#include <math.h>

// 14) Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês,
// mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele
// efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas
// vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do
// vendedor.

// inicio
// 	real: salariofixo, comissao, vtotalvendas;
// 	inteiro: carrosvendidos;
// 	imprima(“Digite o número de carros vendidos: ”);
// 	leia(carrosvendidos);
// 	imprima(“Digite o valor total de vendas: ”);
// 	leia(vtotalvendas);
// 	imprima(“Digite o salário fixo: ”);
// 	leia(salariofixo);
// 	imprima(“Digite o valor recebido por carro vendido: ”);
// 	leia(comissao);
// 	imprima(“Salário final: “, salariofixo + (comissao*carrosvendidos) + (vtotalvendas*0.05));
// fim

int main(){
    float salariofixo, comissao, vtotalvendas;
    int carrosvendidos;
    printf("Digite o número de carros vendidos: ");
    scanf("%d", &carrosvendidos);
    printf("Digite o valor total de vendas: R$ ");
    scanf("%f", &vtotalvendas);
    printf("Digite o salário fixo: R$ ");
    scanf("%f", &salariofixo);
    printf("Digite o valor recebido por carro vendido: R$ ");
    scanf("%f", &comissao);
    printf("Salário final: R$ %.2f", salariofixo + (comissao*carrosvendidos) + (vtotalvendas*0.05));

    return 0;
}