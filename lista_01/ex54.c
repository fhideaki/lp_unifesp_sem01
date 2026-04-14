#include <stdio.h>
#include <math.h>

// 54) Escreva um programa para ler o número de lados de um polígono regular e a medida do lado (em
// cm). Calcular e imprimir o seguinte:
// - Se o número de lados for igual a 3 escrever TRIÂNGULO e o valor do seu perímetro.
// - Se o número de lados for igual a 4 escrever QUADRADO e o valor da sua área.
// - Se o número de lados for igual a 5 escrever PENTÁGONO.
// Observação: Considere que o usuário só informará os valores 3, 4 ou 5.

// inicio
// 	inteiro: nlados;
// 	real: medidalado, retorno;
// 	imprima(“Digite o número de lados: “);
// 	leia(nlados);
// 	imprima(“Digite a medida do lado (em cm): “);
// 	leia(medidalado);		
// 	se(nlados == 3)
// 		retorno = medidalado * nlados;
// 		imprima(“TRIÂNGULO, perímetro: “, retorno, “ cm.”)
// 	senao
// 		se(nlados == 4)
// 			retorno = medidalado*medidalado
// 			imprima(“QUADRADO, área: “, retorno, “ cm^2”)
// 		senao
// 			imprima(“PENTAGONO”)
// 		fimse
// 	fimse
// fim

int main(){
    int nlados;
    float medidalado, retorno;
    printf("Digite o número de lados: ");
    scanf("%d", &nlados);
    printf("Digite a medida do lado (em cm): ");
    scanf("%f", &medidalado);
    if(nlados==3){
        retorno = medidalado * nlados;
        printf("Triângulo, perímetro: %.2f", retorno);
    }
    else{
        if(nlados==4){
            retorno = medidalado*medidalado;
            printf("Quadrado, área: %.2f", retorno);
        }
        else{
            printf("Pentágono.");
        }
    }

    return 0;
}