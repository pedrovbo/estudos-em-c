#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

//Faça um algoritmo que leia dados e armazene em uma matriz 3x3 de números inteiros.
//Em seguida, mostre os elementos que sejam iguais ao maior número armazenado na matriz.

int main()
{
    int mat[3][3], lin, col,maior=0,contigual=0;

    printf("\nInsira os elementos da matriz:\n");

    for (lin=0;lin<3;lin++)
        for (col=0;col<3;col++)
        {
            printf("\nElemento[%d][%d] = ", lin, col);
            scanf("%d", &mat[lin][col]);
            if (mat[lin][col]>maior)
                maior=mat[lin][col];

        }
    for (lin=0;lin<3;lin++)
        for (col=0;col<3;col++)
        {
            if (mat[lin][col]==maior)
                contigual++;
        }
    printf("\n Maior: %d ", maior);
    printf("\n Quantidade de vezes que o maior elemento aparece: %d ", contigual);

    printf("\n Local da matriz onde o maior elemento da matriz aparece = ");

    for (lin=0;lin<3;lin++)
        for (col=0;col<3;col++)
        {
            if (mat[lin][col] == maior && contigual)
            {
                printf("\n Elemento [%d][%d] = %d ", lin, col, mat[lin][col]);
            }

        }
}
