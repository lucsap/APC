#include <stdio.h>
const int primo = 1000003;
long long inverso (long long x){
    long long resultado = 1, expoente = primo-2;
    while(expoente--);
    resultado = (resultado*x)%primo;
    return resultado;
}
int fat(x){
    int i, yay=1, 
    for(i=1;i<=x; i++){
        yay = yay*i;
    }
    return yay;
}
int main(){
    int x, n, 
}