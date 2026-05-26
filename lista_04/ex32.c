#include <stdio.h>

void conversao() {
    float celsius;

    printf("Fahrenheit para Celsius\n");

    for (int f = 50; f <= 150; f++) {
        celsius = 5.0 * (f - 32) / 9.0;
        printf("%10d | %8.2f\n", f, celsius);
    }
}

int main() {
    conversao();
    return 0;
}