#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int a, b, soma;

    printf("Digite o valor para A: \n");
    scanf("%d", &a);
    printf("Digite o valor para B: \n");
    scanf("%d", &b);

    soma = a + b;
    printf("A soma entre %d + %d = %d\n", a, b, soma);

    return 0;
}