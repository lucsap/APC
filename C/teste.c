#include <stdio.h>

int main() {

	int a, b, res;
	printf("Digite um numero: \n");
	scanf("%d", &a);
	printf("Digite outro numero: \n");
	scanf("%d", &b);
	res = a ^ b;
	printf("%d\n", res);

	return 0;
}