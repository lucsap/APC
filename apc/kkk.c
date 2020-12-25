#include <stdio.h> 

int main() {
    float a, b, c, d, ne, med;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    med = ((2*a) + (3*b) + (4*c) + (1*d))/10;
    printf("Media: %.1f\n", med);
    if(med >= 7.0) {
        printf("Aluno aprovado.\n");
    }else if(med < 5.0) {
        printf("Aluno reprovado.\n");
    }else {
        printf("Aluno em exame.\n");
        scanf("%f", &ne);
        printf("Nota do exame: %.1f\n", ne);
        med = (med + ne)/2;
        if(med >= 5.0) {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", med);
        }else {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", med);
        }
    }
    return 0;
}