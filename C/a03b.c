#include <stdio.h>

int main () {
    int N,I,i,a,b=0,x;

    scanf ("%d\t%d", &N, &I);

    for (i=0; i<N; i++) {

        scanf ("%d", &a);

        b = b+a;
    }

    x = b/N;
    printf ("media : %d\n", x);

    if (x >= I) {
        printf ("o rock reinara mais uma vez\n");
    }
    else {
        printf ("rockeiros trabalhando ja\n");
    } 
    return 0;
}