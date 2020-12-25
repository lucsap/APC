#include <stdio.h>
#include <math.h>

int main () {

    long long a, b, c,delta;
    scanf("%lld %lld %lld", &a, &b, &c);
    delta = ((b*b) + ((-4)*(a))*(c));

    if (delta >= 0) {
        printf("reais\n");
    }else {
        printf("complexas\n");
    }
    return 0;
}