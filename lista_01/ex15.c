#include <stdio.h>
#include <math.h>

// 15) Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor
// correspondente em graus Celsius (baseado na fórmula abaixo):

// inicio
// 	real: tfahrenheit;
// 	leia(tfahrenheit);
// 	imprima(“Temperatura em Celsius: ”, (5.0/9.0)*(tfahrenheit-32));
// fim

int main(){
    float tfahrenheit;
    printf("Digite a temperatura em °F: ");
    scanf("%f", &tfahrenheit);
    printf("Temperatura de %.2f°F em °C: %.2f°C", tfahrenheit, (5.0/9.0)*(tfahrenheit-32));

    return 0;
}