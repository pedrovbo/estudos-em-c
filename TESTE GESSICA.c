#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main()
{
    //OS VALORES CONSTANTES DOS VETORES PROVA1,2 E 3 SÃO EQUIVALENTES AS REFERENCIAS DOS ALUNOS

    float prova1[10], prova2[10], prova3[10], mediaprova1, mediaprova2, mediaprova3, medialuno[10], somaprova1, somaprova2, somaprova3, mediaturma;
    int cont;

    for (cont=0;cont<10;cont++)
    {
        printf("\nDigite a nota da primeira prova: \n");
        scanf("%.2f", prova1[cont]);
    }

    for (cont=0;cont<10;cont++)
    {
        printf("\nDigite a nota da segunda prova: \n", prova2);
        scanf("%.2f", prova2[cont]);
    }

    for (cont=0;cont<10;cont++)
    {
        printf("\nDigite a nota da terceira prova: \n", prova3);
        scanf("%.2f", prova3[cont]);
    }
}
