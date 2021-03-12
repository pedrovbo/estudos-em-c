#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>

//O programa calcula o valor de notas de 3 provas, para uma turma de [x] alunos, onde os valores nos vetores correspondem ao número de alunos da turma. Ao final da execução será mostrada a media de cada prova, a media da turma e a media de cada aluno, respectivamente.

int main()
{
    //O numero de vetores equivale a quantidade de alunos

    float prova1[10], prova2[10], prova3[10], mediaprova1, mediaprova2, mediaprova3, medialuno[10], somaprova1, somaprova2, somaprova3, mediaturma;
    int cont, cont1, cont2, cont3;
    somaprova1=0;
    somaprova2=0;
    somaprova3=0;
    mediaprova1=0;
    mediaprova2=0;
    mediaprova3=0;
    mediaturma=0;

    for (cont=0;cont<10;cont++)
    {
        printf("\nDigite a nota da primeira prova: \n");
        scanf("%f", &prova1[cont]);
    }

    for (cont=0;cont<10;cont++)
    {
        printf("\nDigite a nota da segunda prova: \n", prova2);
        scanf("%f", &prova2[cont]);
    }

    for (cont=0;cont<10;cont++)
    {
        printf("\nDigite a nota da terceira prova: \n", prova3);
        scanf("%f", &prova3[cont]);
    }

    for (cont=0;cont<10;cont++)
    {
        somaprova1 = somaprova1+prova1[cont];
    }

    for (cont=0;cont<10;cont++)
    {
        somaprova2 = somaprova2+prova2[cont];
    }

    for (cont=0;cont<10;cont++)
    {
        somaprova3 = somaprova3+prova3[cont];
    }

//Somatório das provas 1, 2 e 3

//printf("\nA soma da primeira prova e: %.2f\n",somaprova1);

//printf("\nA soma da segunda prova e: %.2f\n",somaprova2);

//printf("\nA soma da terceira prova e: %.2f\n",somaprova3);

//Cálculo da media das provas 1, 2 e 3

mediaprova1 = (mediaprova1 + somaprova1)/10;
printf("\nA media da primeira prova e: %.2f\n",mediaprova1);

mediaprova2 = (mediaprova2 + somaprova2)/10;
printf("\nA media da segunda prova e: %.2f\n",mediaprova2);

mediaprova3 = (mediaprova3 + somaprova3)/10;
printf("\nA media da terceira prova e: %.2f\n",mediaprova3);

//Cálculo da media da turma

mediaturma = (mediaprova1 + mediaprova2 + mediaprova3)/3;
printf("\nA media da turma e: %.2f\n",mediaturma);

//Cálculo da media de cada aluno

for (cont=0;cont<10;cont++)
{
    medialuno[cont] = (prova1[cont] + prova2[cont] + prova3[cont])/3;
    printf("\nA media do aluno e:%.2f\n", medialuno[cont]);
}

return 0;

}
