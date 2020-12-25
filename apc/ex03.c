#include <stdio.h>

int main() {

    const float vluz = 300000000;
    const float rterra = 6371;
    float ttime;
    ttime = rterra / (vluz / 1000);
    printf("A luz demora uma uma cerca de %f milisegundos para dar uma volta completa na Terra.\n\n", ttime);
    
    return 0;
}