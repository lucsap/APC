#include <stdio.h>

int main () {

    int n,i = 0,soma = 0,med;
    
    do {
        scanf("%d", &n);
        soma += n;
        i++;

    }while (n>=0);
    
    soma++;
    i--;
    med = soma/i;
    printf("%d\n", med);
    return 0;
}