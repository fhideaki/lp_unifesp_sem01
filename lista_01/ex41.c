#include <stdio.h>
#include <math.h>

// 41) Ler dois valores e imprimir uma das três mensagens a seguir:
// “Números iguais”, caso os números sejam iguais
// “Primeiro é maior”, caso o primeiro seja maior que o segundo
// “Segundo maior”, caso o segundo seja maior que o primeiro

// inicio
// 	inteiro: n1, n2;
// 	imprima(“Digite um número: ”);
// 	leia(n1);
// 	imprima(“Digite outro número: ”);
// 	leia(n2);
// 	se(n1==n2)
// 		imprima(“Números iguais”)
// 	senao
// 		se(n1>n2)
// 			imprima(“Primeiro é maior”)
// 		senao
// 			imprima(“Segundo é maior”)
// 		fimse
// 	fimse
// fim

int main(){
    int n1, n2;
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite outro número: ");
    scanf("%d", &n2);
    if(n1==n2){
        printf("Números iguais");
    }
    else{
        if(n1>n2){
            printf("Primeiro é maior");
        }
        else{
            printf("Segundo é maior");
        }
    }
    return 0;
}
