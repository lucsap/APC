#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool Existe(int valores, int tam, int valor){ /*compara pra ver se o número aleatório é repetido*/
    int i;
    for(i = 0; i < tam; i++){
        if(valores == valor){
            return true;
        }
    }
    return false;
}

void compara(int riddle){
    int i, random;
    srand(time(NULL));
    for(i = 0; i < 3; i++) {
        random = rand() % 11;
        while(Existe(riddle, i, random)){
            random = rand() % 11;
        }
        riddle = random;

        if(riddle == 1){
            /*CHARADA 1*/
            printf("charada 1\n");
        }else if(riddle == 2){
            printf("charada 2\n");
        }else if(riddle == 3){
            printf("charada 3\n");
        }else if(riddle == 4){
            printf("charada 4\n");
        }else if(riddle == 5){
            printf("charada 5\n");
        }else if(riddle == 6){
            printf("charada 6\n");
        }else if(riddle == 7){
            printf("charada 7\n");
        }else if(riddle == 8){
            printf("charada 8\n");
        }else if(riddle == 9){
            printf("charada 9\n");
        }else if(riddle == 10){
            printf("charada 10\n");
        }else {
            printf("PODE SER ZERO!\n");
        }
    }
}

int main() {
    int riddle = 1;
    compara(riddle);

    return 0;
}