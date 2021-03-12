#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

//Faça um algoritmo que leia uma matriz 2x2 de números inteiros.
//Gere uma segunda matriz, na qual as linhas são as colunas da matriz 1, e as colunas são as linhas da matriz 1.

int main()
{
    int matriz1[2][2], matriz2[2][2], linha, coluna;

printf("\nDigite os numeros elementos da matriz: \n");

    for (linha=0;linha<2;linha++)
        for (coluna=0;coluna<2;coluna++)
    {
        printf("\nElemento da Matriz1[%d][%d] = ", linha, coluna);
        scanf("%d", &matriz1[linha][coluna]);
    }

    printf("\n\n**************************Saida de Dados**************************\n\n");

    for(linha=0;linha<2;linha++)
        for(coluna=0;coluna<2;coluna++)
        {
            printf("\nElemento [%d][%d] = %d\n", linha, coluna, matriz1[linha][coluna]);
        }
printf("\n\n**************************Entrada de Dados da Segunda Matriz**************************\n\n");

    for (linha=0;linha<2;linha++)
        for (coluna=0;coluna<2;coluna++)
        {
            printf("\nElemento da Matriz2[%d][%d] = ", linha, coluna);
            scanf("%d", &matriz2[linha][coluna]);
        }
    printf("\n\n**************************Saida de Dados**************************\n\n");

    for(linha=0;linha<2;linha++)
        for(coluna=0;coluna<2;coluna++)
        {
            printf("\nElemento [%d][%d] = %d\n", linha, coluna, matriz2[linha][coluna]);
        }

printf("\n\n**************************Inversao Linha Coluna Matriz1 para Matriz2**************************");

    for(linha=0;linha<2;linha++)
        for (coluna=0;coluna<2;coluna++)
        {
            matriz2[coluna][linha] = matriz1[linha][coluna];
        }
printf("\n Matriz gerada com colunas e linhas invertidas \n");

    for(linha=0;linha<2;linha++)
        for (coluna=0;coluna<2;coluna++)
        {
            printf("\n\n Elemento [%d][%d] = %d \n\n",linha, coluna, matriz2[linha][coluna]);
        printf("\n");
        }

return 0;

}
