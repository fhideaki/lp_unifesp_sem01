#include <stdio.h>
#include <math.h>

// 10) Faça um algoritmo que pergunte quanto a pessoa ganha por hora (salário por hora) e o número de
// horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

// inicio
//  real: salariohora, horastrabalhadas;
//  imprima(“Digite o valor de seu salário por hora: ”);
//  leia(salariohora);
//  imprima(“Digite quantas horas trabalhou no mês: “);
//  leia(horastrabalhadas);
//  imprima(“Total do salário no mês: “, salariohora*horastrabalhadas);
// fim

int main(){
    float salariohora, horastrabalhadas;
    printf("Digite o valor de seu salário por hora: ");
    scanf("%f", &salariohora);
    printf("Digite quantas horas trabalhou no mês: ");
    scanf("%f", &horastrabalhadas);
    printf("Total do salário no mês: %.2f R$/hora * %.2f horas trabalhadas = R$ %.2f", salariohora, horastrabalhadas, salariohora*horastrabalhadas);

    return 0;
}
