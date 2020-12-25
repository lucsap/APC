#include <stdio.h>

int main () {
    int i,N,a,mx,mn;
    
    scanf("%d", &N);
    
    for(i=1; i<=N; i++) {
        scanf("%d", &a);

        if (i==1) {
            mx = a;
            mn = a;
        }
        else if(a > mx) {
            mx = a;
        }
        else if(a < mn) {
            mn = a;
        }
    }
    printf("max = %d; min = %d\n", mx, mn);
    return 0;
}