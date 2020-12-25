#include <stdio.h>
int ehPrimo(int x){
    int l;
    for(l=2; l<x; l++){
        if(x%l==0){
            return 0;
        }
    }
    return 1;
}

int divisoresPrimos(int x){
    int n, dv=0;
    for(n=2; n<=x; n++){
        if(ehPrimo(n) && (x%n==0)){
            dv++;
        }
    }
    return dv;
}
int f(int x, int a, int b){
    int valor, dv;
    dv = divisoresPrimos(x);
    valor = (a*dv*dv*dv)-(b*x);
    return valor;
}

int main (){
    int l, i, r, a, b, h, max;
    scanf("%d %d %d %d", &a, &b, &l, &r);
    max = f(l, a, b);
    for (i=l+1; i<=r; i++){
        h = f(i, a, b);
        if(max<h){
              max = h;
            }
        }
    printf("%d\n", max);
    return 0;
}