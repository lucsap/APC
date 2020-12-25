#include <stdio.h>

int main() {

    char name[30];
    char adress[30];
    int matricula;
    long cpf;
    float height;
    printf("Insira o seu nome: \n");
    scanf("%s", name);
    getchar();
    printf("Insira a sua matricula: \n");
    scanf("%d", &matricula);
    getchar();
    printf("Insira o seu endereco: \n");
    scanf("%s", adress);
    getchar();
    printf("Insira o seu CPF: \n");
    scanf("%ld", &cpf);
    getchar();
    printf("Insira a sua altura: \n");
    scanf("%f", &height);
    getchar();
    printf("Obrigado %s, seu cadastro sob a matricula %d foi um sucesso! Voce mora em: %s. Eh portador do CPF %ld e mede %.2fm.\n\n", name, matricula, adress, cpf, height);

    return 0;
}