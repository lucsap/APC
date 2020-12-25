#include <stdio.h>

int main() {

    const float vluz = 300000000;
    const float rterra = 6371;
    float ttime;
    ttime = rterra / (vluz / 1000);
    printf("%f\n\t", ttime);
    
    return 0;
}