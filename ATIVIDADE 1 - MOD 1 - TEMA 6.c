#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int vet[10],posicao;
	for (posicao=0;posicao<10;posicao++)
	{
		scanf("%d",&vet[posicao]);
	}
	for (posicao=9;posicao>=0;posicao--)
	{
		printf("%d\n",vet[posicao]);
	}
}
