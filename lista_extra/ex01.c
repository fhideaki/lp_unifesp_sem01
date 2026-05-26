// Exercício 1: Interseção Única de Vetores
// Faça um algoritmo que leia dois vetores, A e B, com 5 números inteiros cada. O programa deve identificar quais números aparecem em ambos os vetores (interseção). No entanto, um número só deve ser impresso uma única vez na lista de resultados, mesmo que ele se repita várias vezes dentro de A ou de B.
// Exemplo: Se o número 5 está no vetor A e também no vetor B, o programa imprime "5" e não volta a processá-lo.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    // Criando os vetores
    int A[20], B[20], interseccao[20], achou = 0, cont = 0;

    // Preenchendo os vetores
    // for(int i=0; i<20; i++){
    //     printf("Digite um número para o vetor A[%d]: ", i);
    //     scanf("%d", &n);
    //     A[i] = n;
    // }

    // for(int i=0; i<20; i++){
    //     printf("\nDigite um número para o vetor B[%d]: ", i);
    //     scanf("%d", &n);
    //     B[i] = n;
    // }

    // Limpando a interseccao
    for(int i=0; i<20; i++){
        interseccao[i]=0;
    }

    // Preenchendo os vetores randomicamente
    srand(time(NULL));
    printf("Vetor A: ");
    for(int i=0; i<20; i++){
        A[i] = rand()%10;
        printf("%d, ", A[i]);
    }

    printf("\nVetor B: ");
    for(int i=0; i<20; i++){
        B[i] = rand()%10;
        printf("%d, ", B[i]);
    }

    // Percorrendo os números do primeiro vetor
    for(int i=0; i<20; i++){
        // Comparando o número do primeiro vetor com cada número do segundo:
        for(int j=0; j<20; j++){
            // Se encontrar a igualdade...
            if(A[i] == B[j]){

                //... e não for a primeira vez...
                for(int k=0; k<20; k++){
                    if(A[i]==interseccao[k]){
                        achou = 0;
                        break;
                    }
                    achou = 1;
                }

                // Parando de percorrer o resto do vetor.
                break;
            }

            // Se eu achei...
            if(achou==1){
                //... insiro no vetor interseccao.
                interseccao[cont]=A[i];
                cont++;
            }
        }
    }

    printf("\nIntersecção AB: ");
    for(int i=0; i<20; i++){
        printf("%d, ", interseccao[i]);
    }
}