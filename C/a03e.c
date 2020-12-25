#include <stdio.h>

int main () {
    long long a,b,c=1,i;
    long long inf = 1e9 + 7;
    scanf ("%lld\t%lld", &a, &b);

    for (i=0; i<b; i++) {
        c=(c*a)%(inf);
    }

    printf ("%lld\n", c);
    return 0;
}#include <stdio.h>

int main () {
    long long a,b,c=1,i;
    long long inf = 1e9 + 7;
    scanf ("%lld\t%lld", &a, &b);

    for (i=0; i<b; i++) {
        c=(c*a)%(inf);
    }

    printf ("%lld\n", c);
    return 0;
}