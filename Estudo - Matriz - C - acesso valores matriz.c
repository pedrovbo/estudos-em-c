#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

int main()
{
	int linha, coluna, matriz[3][3];
	matriz[0][0]=1;
	matriz[0][1]=2;
	matriz[0][2]=3;
	matriz[1][0]=4;
	matriz[1][1]=5;
	matriz[1][2]=6;
	matriz[2][0]=7;
	matriz[2][1]=8;
	matriz[2][2]=9;
	linha=
	for (linha=0;linha<3;linha++)
	{
		printf("%d \n dados da linha: ",linha);
		for (coluna=0;coluna<3;coluna++)
		{
			printf("%d",matriz[linha][coluna]);
		}
	}
	return 0;
}
