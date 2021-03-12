#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	const int tamvet=6;
	float vet[tamvet], soma=0,media;
	int posicao;
	for (posicao=0;posicao<tamvet;posicao++)
	{
		scanf("%f",&vet[posicao]);
		soma=soma+vet[posicao];
	}
	media=soma/tamvet;
	for (posicao=0;posicao<tamvet;posicao++)
	{
		if (vet[posicao] >= media)
			printf("%.2f\n",vet[posicao]);
	}

	return 0;
}
