#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	const int tamvet=5, tamlista=5;
	int vet[tamvet],numero,posicao,posvet,achou;
	printf("\n Digite os dados para o vetor \n");
	for (posicao=0;posicao<tamvet;posicao++)
		scanf("%d",&vet[posicao]);
	printf("\n Digite numeros a procurar: \n");
	for (posicao=1;posicao<=tamlista;posicao++)	
	{
		scanf("%d",&numero);
		//verifca se o numero está no vetor
		posvet=0;
		achou=0;
		while (posvet<=tamvet-1 && achou==0)
		{
			if (numero==vet[posvet])
				achou=1;
			else posvet++;
		}
		if (achou==1)
			printf("achou na posicao: %d",posvet);
		else
			printf("nao achou o numero");			
	}
}
