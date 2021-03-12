#include <stdio.h>
#include <stdlib.h>

int main()
{
float nota1, nota2, nota3, media;
int cont;
for(cont=0;cont<=40;cont++)
{
	printf("\n Entre com nota 1 do aluno: ");
	scanf("%f",&nota1);
	printf("Entre com nota 2 do aluno: ");
	scanf("%f",&nota2);
	print("Entre com nota 3 do aluno: ");
	scanf("%f",&nota3);
	media=(nota1+nota2+nota3)/3;
	if(media>=7)
	{
		printf("\n Aluno APROVADO com media: %.2f", media);
	}
	else
	{
		printf("\n Aluno REPROVADO com media: %.2f", media);
	}
}
return 0;		
}
