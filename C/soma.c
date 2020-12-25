#include <stdio.h>

int main() {
	int a, b, soma;
	printf("Digite o primeiro numero: \n");
	scanf("%d", &a);
	printf("Digite o segundo numero: \n");
	scanf("%d", &b);

	soma = a + b;
	printf("A soma vale %d!\n", soma);
	return 0;
}