#include<stdio.h>

int main() {

    int gust, jul, G, J, c;
    gust = 140;
    jul = 110;
    c = 0;

    scanf("%d %d", &G, &J);

    while(gust >= jul){
        gust = gust+G;
        jul = jul+J;
        c++;
    }

    printf("%d", c);

    return 0;
}