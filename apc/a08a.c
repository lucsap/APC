#include <stdio.h>

int main(){

    int n;
    char string[100000];
    
    scanf("%s", string);
    int qnt=0;
    
    for(n = 0; string[n] != '\0' ; n++){
        qnt++;
    }
    
    printf("%d\n", qnt);

    return 0;
}