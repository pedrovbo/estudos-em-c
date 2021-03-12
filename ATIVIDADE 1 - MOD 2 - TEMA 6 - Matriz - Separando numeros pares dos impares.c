#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    int matriz[3][4], linha, coluna, contpar=0, contimpar=0;

    printf("\nDigite os numeros dos elementos da matriz:\n\n");

    for (linha=0; linha<3; linha++)
        for (coluna=0; coluna<4; coluna++)
    {
        printf("\nElementos[%d][%d]: \n", linha, coluna);
        scanf("%d", &matriz[linha][coluna]);
    }
    printf("\n\n***************************Saida de dados*******************************\n\n");

    for (linha=0; linha<3; linha++)
        for (coluna=0; coluna<4; coluna++)
    {
        if (matriz[linha][coluna] % 2==0)
            contpar++;
        else
            contimpar++;
    }
    printf("\nPares: %d", contpar);
    printf("\nImpares: %d", contimpar);
return 0;
}
