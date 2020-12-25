#include <stdio.h>

const int primo = 1000003;

long long produto(long long a, long long b){
    return ((a % primo) * (b % primo)) % primo;
}

long long inverso(long long x){
    long long resultado = 1, expoente = primo - 2;
    while(expoente--){
        resultado = (resultado * x) % primo;
    }
    return resultado;
}

long long fatorial(long long f){
    int i, result = 1;
    for(i = 2; i <= f; i++){
        result = produto(result, i);
    }
    
    return result;
}

int main() {
    int n, k;
    int resp;
    scanf("%d %d", &n, &k);
    resp = produto(fatorial(n), inverso(produto(fatorial(k), fatorial(n - k))));
    printf("%d\n", resp);

    return 0;
}