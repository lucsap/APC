#include <stdio.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "Portuguese_Brazil");

    char name[30];
    char adress[30];
    int matricula;
    double height, cpf = 0;
    printf("Insira o seu nome: \n");
    scanf("%30[^\n]s", name);
    getchar();
    printf("Insira a sua matricula: \n");
    scanf("%d", &matricula);
    getchar();
    printf("Insira o seu endereco: \n");
    scanf("%30[^\n]s", adress);
    getchar();
    printf("Insira o seu CPF: \n");
    scanf("%lf", &cpf);
    getchar();
    printf("Insira a sua altura: \n");
    scanf("%lf", &height);
    getchar();
    printf("Obrigado %s, seu cadastro sob a matricula %d foi um sucesso! Voce mora em: %s. Eh portador do CPF %.0lf e mede %.2lfm.\n\n", name, matricula, adress, cpf, height);

    return 0;
}
