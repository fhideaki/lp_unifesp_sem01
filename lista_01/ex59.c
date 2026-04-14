#include <stdio.h>
#include <math.h>

// 59) Escreva um programa que leia o valor de 3 ângulos de um triângulo e escreva se o triângulo é
// Acutângulo, Retângulo ou Obtusângulo. Sendo que:
// - Triângulo Retângulo: possui um ângulo reto. (igual a 90o)
// - Triângulo Obtusângulo: possui um ângulo obtuso. (maior que 90o)
// - Triângulo Acutângulo: possui três ângulos agudos. (menor que 90o)

// inicio
// 	inteiro: ang1, ang2, ang3;
// 	imprima(“Digite o valor do primeiro ângulo do triângulo.”);
// 	leia(ang1);
// 	imprima(“Digite o valor do segundo ângulo do triângulo.”);
// 	leia(ang2);
// 	imprima(“Digite o valor do terceiro ângulo do triângulo.”);
// 	leia(ang3);
// 	se(ang1+ang2+ang3==180)
// 		se(ang1 == 90 OU ang2==90 OU ang3==90)
// 			imprima(“Triângulo Retângulo.”);
// 		senao
// 			se(ang1>90 OU ang2>90 OU ang3>90)
// 				imprima(“Triângulo Obtusângulo.”);
// 			senao
// 				se(ang1<90 E ang2<90 E ang3<90)
// 					imprima(“Triângulo Acutângulo”);
// 			fimse
// 		fimse
// 	senao
// 		imprima(“Soma dos ângulos maior que 180 graus, não é um triângulo válido”);
// 	fimse
// fim

int main(){
    int ang1, ang2, ang3;
    printf("Digite o valor do primeiro ângulo do triângulo: ");
    scanf("%d", &ang1);
    printf("Digite o valor do segundo ângulo do triângulo: ");
    scanf("%d", &ang2);
    printf("Digite o valor do terceiro ângulo do triângulo: ");
    scanf("%d", &ang3);
    if(ang1+ang2+ang3==180){
        if(ang1==90 || ang2==90 || ang3==90){
            printf("Triângulo Retângulo.");
        }
        else{
            if(ang1>90 || ang2>90 || ang3>90){
                printf("Triângulo Obtusângulo.");
            }
            else{
                if(ang1<90 && ang2<90 && ang3<90){
                    printf("Triângulo Acutângulo.");
                }
            }
        }
    }
    else{
        printf("Soma dos ângulos maior que 180 graus então não é um triângulo.");
    }

    return 0;
}