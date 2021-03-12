#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	const int alunos;
	int tamvet1, tamvet2, tamvet3, pos[10];
	float prova1[tamvet1],prova2[tamvet2],prova3[tamvet3],soma1,soma2,soma3,mediaprova1, mediaprova2,mediaprova3,medialuno[10],mediaturma;
	tamvet1 = 10;	
	tamvet2 = 10;
	tamvet3 = 10;
	soma1=0;
	
	for (pos=0;pos<9;pos++)
	{
		printf("Digite a nota do aluno: %f.02",prova1);
		scanf("%f.02",&prova1);
	}
	
	for (pos=0;pos<9;pos++)
	{
		printf("Digite a nota do aluno: %f.02",prova2);
		scanf("%f.02",&prova2);
	}
	
	for (pos=0;pos<9;pos++)
	{
		printf("Digite a nota do aluno: %f.02",prova3);
		scanf("%f.02",&prova3);
	}
	
	for (pos=0;pos<9;pos++)
	{
		soma1=soma1+prova1[pos];
	}
	mediaprova1=soma/10;
	printf("a media da prova1 e: %f.02",mediaprova1);
	
	soma2=0;
	
	for (pos=0;pos<10;pos++)
	{
		soma2=soma2+prova2[pos];
	}
	mediaprova2=soma/10;
	printf("a media da prova2 e: %f.02",mediaprova2);
	
	for (pos=0;pos<10;pos++)
	{
		soma3=soma3+prova3[pos];
	}
	mediaprova3=soma/10;
	printf("a media da prova3 e: %f.02",mediaprova3);
	
	for (pos=0;pos<10;pos++)
	{
		medialuno=(prova1[pos] + prova2[pos] + prova3[pos]/3);		
	}
	printf("A media do aluno e: %f.02",medialuno);
	
	mediaturma = (mediaprova1+ mediaprova2 + mediaprova3)/3;
	printf("A media da turma e: %.02",mediaturma);
	
	return 0;
}
