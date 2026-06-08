#include <stdio.h>

int fatorial(int n) {
	if (n == 0){
		return 1;
	}

	else {
		return ( n * fatorial(n-1));
	}
}

int main() {
    int n = 5; 
    
    printf("O fatorial de %d e %d\n", n, fatorial(n));
    
    return 0;
}