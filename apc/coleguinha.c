#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


void min(int a, int b, int * menora, int * menorb);
void max(int a, int b, int * maiora, int * maiorb);

int main(){
    int n, a, b, i, menora, menorb, maiora, maiorb;
    scanf("%d", &n);
    scanf("%d %d", &menora, &menorb);
    maiora = menora;
    maiorb = menorb;
    for(i = 1;i < n; i++) {
        scanf("%d %d", &a, &b);
        min(a, b, &menora, &menorb);
        max(a, b, &maiora, &maiorb);
    }
    printf("min = (%d,%d); max = (%d,%d)\n", menora, menorb, maiora, maiorb);
    return 0;
}

void min(int a, int b, int * menora, int * menorb) {
    if (a < *menora) {
        *menora = a;
        *menorb = b;
    }
    if (a == *menora){
        if (b < *menorb){
            *menorb = b;
        }
    }
}

void max(int a, int b, int * maiora, int * maiorb) {
    if (a > *maiora) {
        *maiora = a;
        *maiorb = b;
    }
    if (a == *maiora) {
        if (b > *maiorb) {
            *maiorb = b;
        }
    }
}