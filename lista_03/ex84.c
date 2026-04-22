// 84) Faça um algoritmo para ler um valor N qualquer (que será o tamanho dos vetores). Após, ler dois
// vetores A e B (de tamanho N cada um) e depois armazenar em um terceiro vetor Soma a soma dos
// elementos do vetor A com os do vetor B (respeitando as mesmas posições) e escrever o vetor Soma.

#include <stdio.h>

int main(){
    int N, valor;

    printf("Digite um número: ");
    scanf("%d", &N);

    int A[N], B[N], Soma[N];

    for(int i=0; i<N; i++){
        printf("Digite o valor para o índice %d de A: ", i);
        scanf("%d", &valor);
        A[i] = valor;

        printf("Digite o valor para o índice %d de B: ", i);
        scanf("%d", &valor);
        B[i] = valor;
    }

    for(int i=0; i<N; i++){
        Soma[i] = A[i] + B[i];
        printf("Soma de A[%d] + B[%d] = %d\n", i, i, Soma[i]);
    }
}