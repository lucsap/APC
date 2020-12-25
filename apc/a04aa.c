#include <stdio.h>

int main() {

    int i = 0, n, soma = 0, med;
    while(n >= 0) {
        scanf("%d", &n);
        soma += n;
        i++;
    }
    soma++;
    i--;
    med = soma/i;
    printf("%d\n", med);

    return 0;
}