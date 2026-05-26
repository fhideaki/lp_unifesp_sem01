#include <stdio.h>

int tipo_triangulo(int n1, int n2, int n3) {
    // 0 Não é triângulo
    if (n1 + n2 <= n3 || n1 + n3 <= n2 || n2 + n3 <= n1) {
        return 0;
    } 

    // 1 Equilátero
    if (n1 == n2 && n2 == n3) {
        return 1;
    } 

    // 3 Escaleno 
    if (n1 != n2 && n1 != n3 && n2 != n3) {
        return 3;
    } 

    // 2 Isósceles 
    return 2;
}

int main() {
    int a = 5, b = 5, c = 8;
    int resultado;

    resultado = tipo_triangulo(a, b, c);

    printf("Resultado para os lados %d, %d, %d: %d\n", a, b, c, resultado);
    
    return 0;
}