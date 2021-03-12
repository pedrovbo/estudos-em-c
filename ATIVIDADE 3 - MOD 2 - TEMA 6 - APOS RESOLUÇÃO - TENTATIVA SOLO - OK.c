#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main()
{
    int matriz1[5][5], matriz2[5][5],linha, coluna;

printf("\n\nDigite os numeros elementos da matriz\n\n");

for (linha=0;linha<5;linha++)
    for (coluna=0;coluna<5;coluna++)
    {
        printf("\nElemento [%d][%d] = ", linha, coluna, matriz1[linha][coluna]);
        scanf("%d", &matriz1[linha][coluna]);
    }

    for (linha=0;linha<5;linha++)
    for (coluna=0;coluna<5;coluna++)
    {
        matriz2[linha][coluna] = matriz1[coluna][linha];
        printf("\nElemento Matriz2[%d][%d] = %d\n", linha, coluna, matriz2[linha][coluna]);
    }

return (0);
}
