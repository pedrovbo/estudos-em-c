#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main()
{
    float prova1[10], prova2[10], prova3[10], mediaprova1, mediaprova2, mediaprova3, medialuno[10], somaprova1, somaprova2, somaprova3, mediaturma;
    int cont=0;
    somaprova1=0;
    somaprova2=0;
    somaprova3=0;

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

    for (cont=0;cont<10;cont++)
    {
        somaprova1 = somaprova1+prova1[cont];

            for (cont=0;cont<10;cont++)
            {
            somaprova2 = somaprova2+prova2[cont];
            }
                for (cont=0;cont<10;cont++)
                {
                somaprova3 = somaprova3+prova3[cont];
                }
    }

    printf("\nA soma da media da primeira prova e: %.2f\n",somaprova1);

    printf("\nA soma da media da segunda prova e: %.2f\n",somaprova2);

    printf("\nA soma da media da terceira prova e: %.2f\n",somaprova3);

    return 0;

}
