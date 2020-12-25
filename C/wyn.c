#include <stdio.h>

int main() {

	printf("Qual eh o seu nome ?\n");
	char name[10];
	scanf("%s", name);
	printf("Eh um grande prazer em te conhecer, %s!\n", name);

	return 0;
}