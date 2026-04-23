// 91) Faça um algoritmo para ler 50 números e armazenar em um vetor VET, verificar e escrever se
// existem números repetidos no vetor VET e em que posições se encontram.

#include <stdio.h>

int main(){
    int VET[50], n, conferidos[50];

    // Lendo o vetor
    for(int i=0; i<50; i++){
        printf("Digite um número para o índice %d do vetor 1: ", i);
        scanf("%d", &n);

        VET[i] = n;
    }

    // Preenchendo o conferidos[50] com 0. Isso significa que não foi processado.
    for(int i=0; i<50; i++){
        conferidos[i] = 0;
    }

    // Conferindo se existem repetições:
    for(int i=0; i<50; i++){

        int contagem = 0;

        if(conferidos[i]==0){ // Verifica se NÃO foi processado

            for(int j=0; j<50; j++){

                if(VET[j]==VET[i]){ // Compara se o número do VET é igual ao número que está sendo avaliado
                    conferidos[j] = 1; // Marca como processado
                    contagem++; // Conta as ocorrências
                }
            }
        
            if(contagem>1){
                for(int k=0; k<50; k++){
                    if(VET[k]==VET[i]){
                        printf("O número %d aparece na posição %d.\n", VET[i], k);
                    }
                }
            }
        }
    }

    return 0;
}