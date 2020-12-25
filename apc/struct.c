#include <stdio.h>
#include <stdlib.h>

typedef struct character{
    char name[15];
    int level;
    float peso;
} personagem;

int main() {
    int i;
    personagem character[10];
    for(i = 0; i < 4; i++) {
        printf("Digite o nome do personagem %d: \n", i+1);
        scanf("%s", character[i].name);
        printf("Digite o nível do personagem %s: \n", character[i].name);
        scanf("%d", &character[i].level);
        printf("Digite o peso do personagem %s: \n", character[i].name);
        scanf("%f", &character[i].peso);
    }
    for(i = 0; i < 4; i++) {
        printf("O personagem %s tem nível %d e pesa %.2fKg!\n", character[i].name, character[i].level, character[i].peso);
    }
    
    return 0;
}