#include <stdio.h>
#include <math.h>

// 57) Escreva um programa para ler três valores e escrevê-los em ordem decrescente. Considere que o
// usuário não informará valores iguais.

// inicio
// 	inteiro: n1, n2, n3, primeiro, segundo, terceiro;	
// imprima(“Digite o primeiro número: “);
// 	leia(n1);	
// imprima(“Digite o segundo número: “);
// 	leia(n2);
// imprima(“Digite o terceiro número: “);
// 	leia(n3);
// se(n1>n2 E n1>n3)
// primeiro = n1;
// senao
// 	se(n2>n1 E n2>n3)
// 		primeiro = n2;
// 	senao
// 		primeiro = n3;
// 	fimse
// fimse
// se((n1>n2 E n1<n3) OU (n1<n2 E n1>n3))
// segundo = n1;
// senao
// 	se((n2>n1 E n2<n3) OU (n2<n1 E n2>n3))
// 		segundo = n2;
// 	senao
// 		segundo = n3;
// 	fimse
// fimse
// se(n1<n2 E n1<n3)
// terceiro = n1;
// senao
// 	se(n2<n1 E n2<n3)
// 		terceiro = n2;
// 	senao
// 		terceiro = n3;
// 	fimse
// fimse
// imprima(“Ordem decrescente: “, primeiro, “ “, segundo, “ “, terceiro);
// fim

int main(){
    int n1, n2, n3, primeiro, segundo, terceiro;
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    printf("Digite o terceiro número: ");
    scanf("%d", &n3);
    if(n1>n2 && n1>n3){
        primeiro = n1;
    }
    else{
        if(n2>n1 && n2>n3){
            primeiro = n2;
        }
        else{
            primeiro = n3;
        }
    }

    if((n1>n2 && n1<n3) || (n1<n2 && n1>n3)){
        segundo = n1;
    }
    else {
        if((n2>n1 && n2<n3) || (n2<n1 && n2>n3)){
            segundo = n2;
        }
        else {
            segundo = n3;
        }
    }

    if(n1<n2 && n1<n3){
        terceiro = n1;
    }
    else {
        if(n2<n1 && n2<n3){
            terceiro = n2;
        }
        else {
            terceiro = n3;
        }
    }
    printf("Ordem decrescente: %d, %d, %d", primeiro, segundo, terceiro);

    return 0;
}