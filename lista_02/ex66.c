// 66) O mesmo exercício anterior, mas agora, considere que o segundo valor lido poderá ser maior ou
// menor que o primeiro valor lido, ou seja, deve-se testá-los.

#include <stdio.h>

int main () {
    int n1, n2, soma = 0, pivo;

    printf("Digite um número: ");
    scanf("%d", &n1);
    
    printf("Digite outro número: ");
    scanf("%d", &n2);

    if(n1>n2){
        pivo = n1;
        n1 = n2;
        n2 = pivo;
    }

    for(n1; n1<=n2; n1++){
        soma = soma + n1;
    }
    printf("Total: %d", soma);
}