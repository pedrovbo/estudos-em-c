#include<stdio.h>
#include<stdlib.h>

int main()
{
	int cont,num,maior;
	maior=0;
	cont=1;
	
	while(cont<=7)
	{
		printf("Digite um numero: ");
		scanf("%d",&num);
		if (num > maior)
		{
			maior=num;
		}
		cont++;
	}
	printf ("O maior numero= %d\n",maior);
	return 0;
}
