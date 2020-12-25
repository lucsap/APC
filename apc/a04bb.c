#include <stdio.h>

int main() {

    int n, i = 0, max = 0;
    scanf("%d", &n);
    while(max <= n) {
        i++;
        max = max + i;
    }
    max = max - i;
    i--;
    printf("%d\n", max);
    printf("%d\n", i);

    return 0;
}