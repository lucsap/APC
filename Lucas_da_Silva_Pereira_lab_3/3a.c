#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

typedef struct {
		float nota[3], work[2];
		int mat;
	}dados;

int main() {

		dados *aluno;
		int i, t, N;
		printf("Digite o numero de alunos:\n");
		scanf("%d", &N);

		char nomearq [31], txt[5] = ".txt";
		printf("Digite o nome do arquivo:\n");
		scanf("%[\n]", nomearq);
		strcat(nomearq, txt);

		FILE *text;
		text = fopen(nomearq, "w");
		/*if(text == NULL) {
			printf("Falha.\n");
			exit(1);
		}*/

		aluno = (dados *)malloc(N*sizeof(dados));

		for(i = 0; i < N; i++) {
			printf("Matricula:\n");
			scanf("%d", &aluno[i].mat);
			fprintf(text, "%d\n", &aluno[i].mat);
			for (t = 0; t < 3; t++) {
				printf("Digite as notas das provas:\n");
				scanf("%f", &aluno[i].nota[t]);
				fprintf(text, "%f\n", &aluno[i].nota[t]);
			}
			for (t = 0; t < 2; t++) {
				printf("Digite as notas dos trabalhos:\n");
				scanf("%f", &aluno[i].work[t]);
				fprintf(text, "%f\n", &aluno[i].work[t]);
			}
		}

	return 0;
}