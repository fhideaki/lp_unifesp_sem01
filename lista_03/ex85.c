// 85) Faça um algoritmo para ler e armazenar em um vetor a temperatura média de todos os dias do ano.
// Calcular e escrever:
// a) Menor temperatura do ano
// b) Maior temperatura do ano
// c) Temperatura média anual
// d) O número de dias no ano em que a temperatura foi inferior a média anual

#include <stdio.h>

int main(){
    int contagem = 0;
    float media, temp_media, maior, menor, Ano[365], soma = 0;

    for(int i=0; i<365; i++){
        temp_media = 0;
        printf("Digite a temperatura média do dia %d: ", (i + 1));
        scanf("%f", &temp_media);
        Ano[i] = temp_media;
    }

    for(int i=0; i<365; i++){
        soma = soma + Ano[i];
    }

    media = soma/365.0;

    for(int i=0; i<365; i++){
        if (Ano[i] < media){
        contagem++;
        }
    }

    menor = Ano[0]; 
    
    for(int i=0; i<365; i++){
        if (Ano[i] < menor){
            menor = Ano[i];
        }
    }

    maior = Ano[0]; 
    
    for(int i=0; i<365; i++){
        if (Ano[i] > maior){
            maior = Ano[i];
        }
    }

    printf("\nMaior de temperatura: %.2f\n", maior);
    printf("\nMenor de temperatura: %.2f\n", menor);
    printf("\nMédia de temperatura: %.2f\n", media);
    printf("Dias abaixo da média: %d\n", contagem);

    return 0;
}