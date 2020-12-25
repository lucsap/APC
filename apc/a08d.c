#include <stdio.h>
#include <string.h>

int main(){
    char s[100000];
    int n, tam;
    scanf("%s", s);
    tam = strlen(s);
    char s2[100000];
    for(n = 0; s[n] != '\0'; n++){
        s2[tam-n-1] = s[n];
    }
    printf("%s\n", s2);

    return 0;
}