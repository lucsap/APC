#include <stdio.h>
#include <math.h>

int main() {

	int num, d, t;
	float rq;
	printf("Digite um numero: \n");
	scanf("%d", &num);
	d = num * 2;
	t = num * 3;
	rq = sqrt(num);
	printf("O dobro de %d eh %d, o triplo %d e a raiz quadrada %.2f!\n", num, d, t, rq);

	return 0;
}