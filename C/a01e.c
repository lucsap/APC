#include <stdio.h>
#include <math.h>

int main() {

    float c1, c2, hip;
    scanf("%f %f", &c1, &c2);
    hip = (c1*c1) + (c2*c2);
    hip = sqrt(hip);
    printf("%.6f", hip);
    return 0;
}