#include <stdio.h>
#include <math.h>

// 55) Acrescente as seguintes mensagens à solução do exercício anterior conforme o caso.
// - Caso o número de lados seja inferior a 3 escrever NÃO E’ UM POLÍGONO.
// - Caso o número de lados seja superior a 5 escrever POLÍGONO NÃO IDENTIFICADO.
// Observação: Considere que o usuário poderá informar qualquer valor para o número de lados.

// inicio
// 	inteiro: nlados;
// 	real: medidalado, retorno;
// 	imprima(“Digite o número de lados: “);
// 	leia(nlados);
// 	imprima(“Digite a medida do lado (em cm): “);
// 	leia(medidalado);
// se(nlados<3)
// imprima(“Não é um polígono”)
// senao	
// se(nlados > 5)
// imprima(“Polígono não identificado”)
// senao	
// 			se(nlados == 3)
// 				retorno = medidalado * nlados;
// 				imprima(“TRIÂNGULO, perímetro: “, retorno, “ cm.”)
// 			senao
// 				se(nlados == 4)
// 					retorno = medidalado*medidalado
// 					imprima(“QUADRADO, área: “, retorno, “ cm^2”)
// 				senao	
// 					imprima(“PENTAGONO”)
// 				fimse
// 			fimse
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

    if(nlados<3){
        printf("Não é um polígono.");
    } 
    else {
        if(nlados>5){
            printf("Polígono não identificado."); 
        } 
        else {
            if(nlados==3){
                retorno = medidalado * nlados;
                printf("Triângulo, perímetro: %.2f", retorno);
            } 
            else {
                if(nlados==4){
                    retorno = medidalado*medidalado;
                    printf("Quadrado, área: %.2f", retorno);
                } 
                else {
                    printf("Pentágono.");
                }
            }
        }
    }

    return 0;
}