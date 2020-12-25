#include <stdio.h>

int main () {
    int a,b;
    scanf("%d\t%d",&a, &b);
    if (a>b) {
        printf("%d\n", a);
    }
    else {
        printf("%d\n", b);
    }
    if (a<b) {
        printf("%d\n", a);
    }
    else  {
        printf("%d\n", b);
    }
    if (a==b) {
        printf("iguais\n");
    }
    else {
        printf("diferentes\n");
    }
    return 0;
}