#include <stdio.h>
#include <stdlib.h>

void min(int a, int b, int* menora, int* menorb) {
    if(a < *menora) {
        *menora = a;
    }else {
        *menora = *menora;
    }if(b < *menorb){
        *menorb = b;
    }else {
        *menorb = *menorb;
    }
}

void max(int a, int b, int* maiora, int* maiorb) {
    if(a > *maiora) {
        *maiora = a;
    }else {
        *maiora = *maiora;
    }if(b > *maiorb){
        *maiorb = b;
    }else {
        *maiorb = *maiorb;
    }
}

int main() {
    int n, i = 0, a, b, menora, menorb, maiora, maiorb;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        min(a, b, &menora, &menorb);
        max(a, b, &maiora, &maiorb);
    }

    printf("min = (%d,%d); max = (%d,%d)\n", menora, menorb, maiora, maiorb);

    return 0;
}