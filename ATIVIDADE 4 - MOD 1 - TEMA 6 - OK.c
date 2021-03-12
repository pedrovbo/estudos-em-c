#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	const int tamvet=50;
	int vet1[tamvet],vet2[tamvet],posicao;
	for (posicao=0;posicao<tamvet;posicao++)
	{
		scanf("%d",&vet1[posicao]);
		if (vet1[posicao]%2 == 0)
			vet2[posicao]=vet1[posicao]+1;
		else
			vet2[posicao]=vet1[posicao]-1;
	}
	printf("Elementos de VET1 e VET2: ");
	for (posicao=0;posicao<tamvet;posicao++)
	{
		printf("%d",vet1[posicao]);
		printf("%d",vet2[posicao]);
	}
}
