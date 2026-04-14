#include <stdio.h>
#include <math.h>

// 56) Escreva um programa para ler dois valores inteiros e uma das seguintes operações a serem
// executadas (codificada da seguinte forma: 1.Adição, 2.Subtração, 3.Divisão, 4.Multiplicação).
// Calcular e escrever o resultado dessa operação sobre os dois valores lidos. Observação: Considere
// que só serão lidos os valores 1, 2, 3 ou 4.

// inicio
// 	inteiro: n1, n2, operacao;	
// imprima(“Digite o primeiro número: “);
// 	leia(n1);	
// imprima(“Digite o segundo número: “);
// 	leia(n2);
// 	imprima(“Digite a operação a ser realizada - 1. Adição 2. Subtração. 3. Divisão e 4. Multiplicação “);
// 	leia(operacao);
// se(operacao==1)
// imprima(“Resultado da Adição: ”, n1 + n2);
// se(operacao==2)
// imprima(“Resultado da Subtração: ”, n1 - n2);
// se(operacao==3)
// 	se(n2!=0)
// imprima(“Resultado da Divisão: ”, n1/n2);
// senao
// 	imprima(“Divisão por zero indefinida”);
// fimse
// se(operacao==4)
// imprima(“Resultado da Multiplicação: ”, n1*n2);
// fim


int main(){
    int n1, n2, operacao;
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    printf("Digite a operação a ser realizada \n 1. Adição \n 2.Subtração \n 3.Divisão \n 4.Multiplicação: ");
    scanf("%d", &operacao);
    if(operacao==1){
        printf("Resultado da adição: %d", n1+n2);
    }    
    if(operacao==2){
        printf("Resultado da subtração: %d", n1-n2);
    }    
    if(operacao==3){
        if(n2!=0){
            printf("Resultado da divisão: %.2f", (float)n1/n2);
        }
        else{
            printf("Divisão por zero indefinida.");
        }
    }    
    if(operacao==4){
        printf("Resultado da multiplicação: %d", n1*n2);
    }

    return 0;
}