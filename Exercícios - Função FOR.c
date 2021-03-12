#include <stdio.h>
#include <stdlib.h>

int main()
{
	float sal, maior, soma, media;
	int cont;
	maior = 0;
	soma = 0;
	for(cont=1;cont<=10;cont++)
	{
		printf("Digite o salario do funcionario: ");
		scanf("%f",&sal);
		soma=soma+sal;
		if(sal > maior)
		{
			maior=sal;
		}
	}
	media = soma/5;
	printf("O maior salario da empresa e = %.2f \n", maior);
	printf("A media salarial da empresa e = %.2	f \n", media);
	return 0;
}
