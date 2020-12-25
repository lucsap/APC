#include <stdio.h>

int main() {

    int i, j, n, e, DiagPrinCres, DiagPrinDecres, DiagSecCres, DiagSecDecres, primary, secundary;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            scanf("%d", &e);
            if(j == i) { /*Entra na diagonal principal*/
                if(j == 1 && i == 1) {
                    DiagPrinCres = e;
                    DiagPrinDecres = e;
                }else {
                    if(e > DiagPrinCres) { /*Verifica se eh crescente*/
                        DiagPrinCres = e;
                        if(j == n && i == n) {
                            primary = 1;
                        }
                    }else {
                        if(e < DiagPrinDecres) {
                            DiagPrinDecres = e; /*Verifica se eh decrescente*/
                            if(j == n && i == n) {
                                primary = 2;
                            }
                        }
                    }
                }
            }else {
                if((i + j) == (n + 1)) { /*Entra na diagonal secundaria*/
                    if(j == n && i == 1) {
                        DiagSecCres = e;
                        DiagSecDecres = e;
                    }else {
                        if(e > DiagSecCres) { /*Verifica se eh crescente*/
                            DiagSecCres = e;
                            if(j == 1 && i == n) {
                                secundary = 1;
                            }
                        }else {
                            if(e < DiagSecDecres) { 
                                DiagSecDecres = e; /*Verifica se eh decrescente*/
                                if(j == 1 && i == n) {
                                    secundary = 2;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if((primary == 1 && secundary == 2) || (primary == 2 && secundary == 1)) {
        printf("diagonais invertidas\n");
    }else {
        printf("nada de especial\n");
    }

    return 0;
}