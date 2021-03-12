#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

//Faça um algoritmo que leia números inteiros e armazene-os na matriz 4x4. Porém, na diagonal principal, não armazene o número lido, e sim um 0 (zero).
//Na diagonal principal, os elementos têm linha = colona: [0][0], [1][1], [2][2], [3][3].


int main()
{
    int matriz[4][4], linha, coluna;

    printf("\nDigite valor para os elementos da matriz: \n");

    for (linha=0;linha<4;linha++)
        for (coluna=0;coluna<4;coluna++)
            if (linha == coluna)
            {
                printf("\nElemento [%d][%d] = 0\n", linha, coluna);
                matriz[linha][coluna] = 0;
            }
            else
            {
            printf("\nElemento[%d][%d] = \n", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
            }
        printf("\nListagem dos elementos da matriz\n");
        for (linha=0; linha<4; linha++)
            for (coluna=0; coluna<4; coluna++)
                printf("\nElemento[%d][%d] = %d\n", linha, coluna, matriz[linha][coluna]);



}
