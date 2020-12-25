#include <stdio.h>

int main() {
	printf("Digite um numero: \n");
	int n;
	scanf("%d", &n);
	printf("Analisando o valor %d, o sucessor eh %d e o antecessor eh %d!\n", n, n+1, n-1);

	return 0;
}