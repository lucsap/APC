#include <stdio.h>

int min(int a, int b) {
    if (a < b) {
        return a;
    }else {
        return b;
    }
}

int max(int a, int b) {
    if (a > b) {
        return a;
    }else {
        return b;
    }
}

int main() {
    int n,i,x = -999,y = 1000000,z;

        scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &z);

        y = min(y,z);
        x = max(x,z);
    }
    printf("min = %d; max = %d\n", y, x);
    
    return 0;
}