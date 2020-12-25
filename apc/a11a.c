#include <stdio.h>

typedef struct client{
    int ID;
    char nome[20];
    int telefone;
} cliente;

int main() {

    int N, Q, i;
    cliente customer[20];
    scanf("%d %d", &N, &Q);
    for(i = 0; i < N; i++) {
        scanf("%d %s %d", customer[i].ID, customer[i].nome, customer[i].telefone);
    }
    for(i = 0; i < Q; i++) {
        //struct somente ID//
    }
    
    return 0;
}