#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

//Faça um programa que gere uma matriz 5x5, conforme esta sequência: Diagonal 00 até 55 com valores iguais a zero

int main()
{
    int mat[5][5], lin, col;

    for (lin=0;lin<5;lin++)
        for (col=0;col<5;col++)
        {
        mat[lin][col] = 1;
        if (lin == col)
            mat[lin][col] = 0;
        }


    for (lin=0;lin<5;lin++)
        for (col=0;col<5;col++)
        {
        printf("\nElemento [%d][%d] = %d\n", lin, col, mat[lin][col]);
        }




return (0);

}
