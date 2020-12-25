#include <stdio.h>

int main() {
    int capacidade, posto, obstaculo, num, c=0;
    scanf("%d", &capacidade);
    do{
        scanf("%d", &num);
        if (num == 1){
            scanf("%d", &posto);
            if(posto >= capacidade) {
                capacidade = capacidade;
            }
            else{
            capacidade = capacidade+posto;
            }
        }
        else if( num==2 ) {
            scanf("%d", &obstaculo);
            capacidade = capacidade-obstaculo; 
            c += 1;
        }
            else if (num == 0) {
                capacidade = capacidade-1;
                c += 1;
            }
        
    }while(num != -1);
    if (capacidade < 0){
            printf("%d", c);    
        }
        else{
        printf("Lar Deivis lar");
        }
    
   
    return 0;
}