#include <stdio.h>

int main () {
    int x,y,w,h;
    scanf("%d\t%d\t%d\t%d", &x, &y, &w, &h);
    int a,b;
    scanf("%d %d", &a, &b);
    if (((a<x) || (b<y)) || ((a>x+w) || (b>y+h))) {
        printf("fora");
    }
    else if (((a>x) && (a<x+w)) && ((b>y) && (b<y+h))) {
        printf("dentro");
    }
    else if (((a==x) || (b==y)) || (((a>x) && (a<=x+w)) && ((b>y) && (b<=y+h)))) {
        printf("sobre a borda");
    }
    return 0;
}