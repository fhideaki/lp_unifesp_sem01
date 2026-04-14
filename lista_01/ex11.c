#include <stdio.h>
#include <math.h>

// 11) Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos
// brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em relação ao total
// de eleitores.

// inicio
//  inteiro: eleitores, vbrancos, vnulos, vvalidos;
//  imprima(“Digite a quantidade de eleitores: ”);
//  leia(eleitores);
//  imprima(“Digite a quantidade de votos brancos: “);
//  leia(vbrancos);
//  imprima(“Digite a quantidade de votos nulos: “);
//  leia(vnulos);
//  imprima(“Digite a quantidade de votos válidos: “);
//  leia(vvalidos);
//  imprima(“Votos totais: “, eleitores);
//  imprima(“Votos em branco: “, (vbrancos*100/eleitores), “%”);
//  imprima(“Votos nulos: “, (vnulos*100/eleitores), “%”);
//  imprima(“Votos válidos: “, (vvalidos*100/eleitores), “%”);
// fim

int main(){
   int eleitores, vbrancos, vnulos, vvalidos;
   printf("Digite a quantidade de eleitores: ");
   scanf("%d", &eleitores);
   printf("Digite a quantidade de votos brancos: ");
   scanf("%d", &vbrancos);
   printf("Digite a quantidade de votos nulos: ");
   scanf("%d", &vnulos);
   printf("Digite a quantidade de votos válidos: ");
   scanf("%d", &vvalidos);
   printf("Votos totais: %d, \nVotos em branco: %d%%,\nVotos nulos: %d%%,\nVotos válidos: %d%%.", eleitores, vbrancos*100/eleitores, vnulos*100/eleitores, vvalidos*100/eleitores);

   return 0;
}
