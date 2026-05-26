// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// #define M 20

// int main(){
//   int vet[M];

//   srand(time(NULL));
//   printf("Vet: ");
//   for(int i=0;i<M;i++){
//     vet[i] = rand()%10;
//     printf("%d, ",vet[i]);
//   }

//   for(int i=0;i<M;i++){
//     printf("\nValor %d: ",vet[i]);
//     for(int j=0;j<M;j++){
//       if(vet[i]==vet[j]){
//         if(j<i)
//           break;
//         printf("%d, ",j);
//       }
//     }
//   }
// }

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 20

int main(){
  int vet[M], repetidos[M], achou=0, cont=0;

  srand(time(NULL));
  printf("Vet: ");
  for(int i=0;i<M;i++){
    vet[i] = rand()%10;
    printf("%d, ",vet[i]);
  }

  for(int i=0;i<M;i++){
    for(int j=0;j<M;j++){
      if(vet[i]==vet[j] && i!=j){
        if(j<i)
          break;
        achou = 1;
      }
    }
    if(achou==1){
      repetidos[cont] = vet[i];
      cont++;
    }
    achou = 0;
  }

  for(int i=0;i<cont;i++){
    printf("\nValor %d: ",repetidos[i]);
    for(int j=0;j<M;j++){
      if(repetidos[i]==vet[j])
        printf("%d, ",j);
    }
  }
}