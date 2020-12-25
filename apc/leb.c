#include <stdio.h>

int main() {
    long int num, aux, maior;
    aux = 0;
    maior = 0;
    do{
        scanf("%ld", &num);
        if((aux+num) > maior){
            maior = aux+num;
        }
        aux = num;
    }while(num != 0);

    printf("%ld", maior);

    return 0;
}