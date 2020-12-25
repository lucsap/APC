#include <stdio.h>

int main () {

    int N, K, H;
    scanf("%d %d", &N, &K);
    H = N;
    do{
        H++;
        N = (N-K) + 1;
        if(N < K) {
                
        }
    }while(N - K >= 0);
    printf("%d\n", H);
    
    return 0;
}