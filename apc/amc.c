#include <stdio.h>

int main() {

    long long a, b, c, result;
    scanf("%lld %lld %lld", &a, &b, &c);
    if(c != 0) {
        result = (((a % b) * (0 % b)) % b);
        printf("%lld\n", result);
    }else {
        result = (((a % b) * (1 % b)) % b);
        printf("%lld\n", result);
    }
    
    return 0;
}
