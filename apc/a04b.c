#include <stdio.h>

int main () {

    int N,i = 0,sm = 0;

    scanf("%d", &N);

    do {
        i++;
        sm = sm+i;
    }while (sm<=N);

    sm = sm-i;
    i--;

    printf("%d\n", sm);
    printf("%d\n", i);

    return 0;
}