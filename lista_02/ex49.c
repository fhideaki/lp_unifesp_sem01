// 49) Acrescente uma mensagem 'NOVO CÁLCULO (S/N)?' ao final do exercício [48]. Se for
// respondido 'S' deve retornar e executar um novo cálculo, caso contrário deverá encerrar o algoritmo.

#include <stdio.h>

int main (){
    float np1, np2;
    char c = 's';

    while(c=='s'|| c=='S'){
        printf("Digite a nota da primeira prova: ");
        scanf("%f", &np1);
        while(np1<0 || np1>10){
            printf("Digite uma nota válida (de 0 a 10): ");
            scanf("%f", &np1);
        }
        printf("Digite a nota da segunda prova: ");
        scanf("%f", &np2);
        while(np2<0 || np2>10){
            printf("Digite uma nota válida (de 0 a 10): ");
            scanf("%f", &np2);
        }
        printf("Média: %.2f", (np1+np2)/2);

        printf("Novo cálculo? (s/n)\n");
        scanf(" %c",&c);
        
        while (c!='n' && c!='N' && c!='s' && c!='S')
        {
            printf("Novo cálculo? (s/n)\n");
            scanf(" %c",&c);
        }
    }    
}