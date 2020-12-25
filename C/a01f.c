#include <stdio.h>

int main() {

    float n1, n2, n3, p1, p2, p3, med;
    scanf("%f %f %f", &n1, &n2, &n3);
    scanf("%f %f %f", &p1, &p2, &p3);
    med = (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3);
    printf("%f", med);

    return 0;
}