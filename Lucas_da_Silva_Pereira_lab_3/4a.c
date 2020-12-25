#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

#define MAX1 100
#define MAX2 2
#define MAX3 3

typedef struct{
    float nm;
    float corre;
    float trab[MAX2];
    float nota[MAX3];
    float media;
}cadastramento;

cadastramento cad_al[100];

    void separa(char *guard, int *v) {
        char *p = strtok(guard, "=");

        while (p) {
            sscanf(p, "%f", v);
            p = strtok(NULL, "=");
        }
    }

int main(){
    int i,j;
    int vezes;
    float v[1000];
    float m = 0, t = 0;
    char guard[50];
    char nomearquivo[50];

    FILE *arquivo;
    FILE *arq;
    printf("digite o nome do arquivo: \n");
    gets(nomearquivo);
    strcat(nomearquivo,".txt");
    arq = fopen(nomearquivo,"r");
    arquivo = fopen("media.txt", "w");
    int cont = 0;
    fgets(guard ,50, arq);
    printf("%s", guard);
    separa(guard, &v[0]);



    int ind = v[0] * 7;
    for(i = 1; i <= ind; i++){
        fgets(guard ,50, arq);
        separa(guard, &v[i]);
        printf("verificacao numerica %.2f\n", v[i]);
    }

    for(i = 0; i < v[0]; i++){
        int vi = i*7;

        for(j = 1; j <= ind; j++){
            cad_al[i].nm = v[vi+1];
            cad_al[i].corre = v[vi+2];
            cad_al[i].nota[0] = v[vi+3];
            cad_al[i].nota[1] = v[vi+4];
            cad_al[i].nota[2] = v[vi+5];
            cad_al[i].trab[0] = v[vi+6];
            cad_al[i].trab[1] = v[vi+7];
        }
    }

    for(i = 0; i < v[0]; i++){
    cad_al[i].media =  ((((cad_al[i].nota[0]* 2) + (cad_al[i].nota[1]* 3) + (cad_al[i].nota[2]* 3))/8) + ((cad_al[i].trab[0]+cad_al[i].trab[1])/2))/2;
    }

    for(i = 0; i < v[0]; i++){
        printf("matricula: %.2f \n",cad_al[i].nm);
        printf("corre: %.2f \n",cad_al[i].corre);
        printf("nota 1: %.2f \n",cad_al[i].nota[0]);
        printf("nota 2: %.2f \n",cad_al[i].nota[1]);
        printf("nota 3: %.2f \n",cad_al[i].nota[2]);
        printf("trab 1: %.2f \n",cad_al[i].trab[0]);
        printf("trab 2: %.2f \n",cad_al[i].trab[1]);
        printf("Media: %.2f \n",cad_al[i].media);
}

    for(i = 0; i < v[0]; i++){
        fprintf(arquivo,"Numero de matricula %.2f \n",cad_al[i].nm);
        fprintf(arquivo,"Media %.2f \n",cad_al[i].media);
    }

        fclose(arquivo);
        fclose(arq);

    return 0;
}