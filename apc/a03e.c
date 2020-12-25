#include <stdio.h>
#include <math.h>

int main() {

    long long a,b,c=1,i;
    const long inf = 1e9 + 7;
    scanf ("%lld %lld", &a, &b);
    for (i=0; i<b; i++) {
        c=(c*a)%(inf);
    }
    printf ("%lld\n", c);

    return 0;
}