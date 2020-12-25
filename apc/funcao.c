#include <stdio.h>

float max(float a, float b) {
    a = a+2;
    b = b+1;
    printf("%f %f\n", a, b);
    return 0;
}

int main() {
    
    float x, y;
    scanf("%f %f", &x, &y);
    max(x, y);
    printf("%f %f\n", x, y);

    return 0;
}