#include <stdio.h>

int tamstr(char *string){
    int tam = 0;
    while(string[tam] != '\0'){
        tam++;
    }
    return tam;
}

int main(){
    char str[100];
    int total;
    scanf("%s", str);
    total = tamstr(str);
    printf("%d\n", total);

    return 0;
}