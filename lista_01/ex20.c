#include <stdio.h>
#include <math.h>

// 20) Um motorista de táxi deseja calcular o rendimento de seu carro na praça. Sabendo-se que o preço
// do combustível é de R$ 2.90, escreva um programa para ler: a marcação do odômetro (Km) no início
// do dia, a marcação (Km) no final do dia, o número de litros de combustível gasto e o valor total (R$)
// recebido dos passageiros. Calcular e escrever: a média do consumo em Km/L e o lucro (líquido) do
// dia.

// inicio
// 	inteiro: odometroinicial, odometrofinal;
// 	real: litrosgastos, valorrecebido, lgasolina, custo;
// 	lgasolina = 2.90;
// 	imprima(“Insira o Km do odômetro no começo do dia: ”);
// 	leia(odometroinicial);
// 	imprima(“Insira o Km do odômetro no final do dia: ”);
// 	leia(odometrofinal);	
// imprima(“Insira quantos litros consumiu hoje: ”);
// 	leia(litrosgastos);
// 	imprima(“Insira o valor total recebido dos passageiros”);
// 	leia(valorrecebido);
// 	custo = (2.90*litrosgastos);
// 	imprima(“Média do consumo em L: “, (odometrofinal-odometroinicial)/litrosgastos, “ Km/L”);
// 	imprima(“Lucro líquido: “, valorrecebido - custo);
// fim

int main (){
    int odometroinicial, odometrofinal;
    float litrosgastos, valorrecebido, lgasolina, custo;
    lgasolina = 2.90;
    printf("Insira o Km do odômetro no começo do dia: ");
    scanf("%d", &odometroinicial);
    printf("Insira o Km do odômetro no final do dia: ");
    scanf("%d", &odometrofinal);
    printf("Insira quantos litros consumiu hoje: ");
    scanf("%f", &litrosgastos);
    printf("Insira o valor total (em R$) recebido dos passageiros: ");
    scanf("%f", &valorrecebido);
    custo = (lgasolina*litrosgastos);
    printf("Média do consumo em Km/L: %.2f\n", (odometrofinal-odometroinicial)/litrosgastos);
    printf("Lucro líquido: %.2f", valorrecebido - custo);

    return 0;
}