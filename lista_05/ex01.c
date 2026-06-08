#include <stdio.h>

int soma(int n) {
	if (n == 1) return (1);
	else return (n + soma(n-1));
}

int main() {
	int n=10;
	printf("A soma é %d", soma(n));
	return 0;
}