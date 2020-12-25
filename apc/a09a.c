#include <stdio.h>

int main(){

    int n,m;
    scanf("%d %d", &n, &m);

    int Mat[n][m];
    int i, j;

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &Mat[i][j]);
        }
    }

    for(j = 0; j < m; j++){
        for(i = 0; i < n; i++){
            printf("%d\t", Mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}