#include<stdio.h>
#include<stdlib.h>

int main()
{
	float nota1,nota2,nota3,media;
	int cont=1;
	while (cont<=40)
	{
		printf("Entre com a nota 1 do aluno:");
		scanf("%f",&nota1);
		printf("Entre com a nota 2 do aluno:");
		scanf("%f",&nota2);
		printf("Entre com a nota 3 do aluno:");
		scanf("%f",&nota3);
		media=(nota1+nota2+nota3)/3;
		if (media>=7)
			printf("APROVADO com media %2.f \n\n",media);
		else
			printf("REPROVADO com media %.2f \n\n",media);
		cont++;		
	}
	return 0;
}
