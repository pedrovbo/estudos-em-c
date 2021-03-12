#include <stdio.h>
#include <stdlib.h>

int main()
{
float nota1, nota2, nota3, media;
int cont;
for(cont=0;cont<=40;cont++)
{
	//printf("###########################\n");
	printf("\nEntre com nota 1 do aluno: ");
	scanf("%f",&nota1);
	printf("\nEntre com nota 2 do aluno: ");
	scanf("%f",&nota2);
	printf("\nEntre com nota 3 do aluno: ");
	scanf("%f",&nota3);
	media=(nota1+nota2+nota3)/3;
	if(media>=7)
	{
		printf("\nAluno APROVADO com media: %.2f", media);
		printf("\n");
		printf("\n");
		//printf("###########################\n");
	}
	else
	{
		printf("\nAluno REPROVADO com media: %.2f", media);
		printf("\n");
		printf("\n");
		//printf("###########################\n");
	}
}
return 0;
}
