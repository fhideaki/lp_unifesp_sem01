#include <stdio.h>

void fibonacci(int termos) {
    int t1 = 0, t2 = 1, proximo;

    printf("Serie de Fibonacci (%d termos): ", termos);

    for (int i = 1; i <= termos; i++) {
        printf("%d ", t1);

        proximo = t1 + t2;
        t1 = t2;
        t2 = proximo;
    }
    printf("\n");
}

int main() {
    int n = 10;
    fibonacci(n);
    return 0;
}