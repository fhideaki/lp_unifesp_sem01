// 64) Escreva um algoritmo para ler 10 números. Todos os números lidos com valor inferior a 40 devem
// ser somados. Escreva o valor final da soma efetuada.

#include <stdio.h>

int main () {
    int n, total = 0;

    for(int i=0; i<10; i++){
        printf("Digite um número: ");
        scanf("%d", &n);
        
        if(n<40){
            total = total + n;
        }
    }
    printf("Total: %d", total);
}