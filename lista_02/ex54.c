// 54) Modifique o exercício anterior para aceitar somente valores maiores que 0 para N. Caso o valor
// informado (para N) não seja maior que 0, deverá ser lido um novo valor para N.

#include <stdio.h>

int main() {
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);
    while(n<=0){
        printf("Digite um número maior que zero: ");
        scanf("%d", &n);
    }
    for(int i=1; i<=n; i++){
        printf("%d\n", i);
    }
}