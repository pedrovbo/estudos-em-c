#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>



int main()
{


int ind, aux, vet [7] = {5,1,4,2,7,8,3};

//Marque a alternativa que apresenta cada elemento do vetor após a execução do seguinte trecho de código:


    for (ind=7;ind>=4;ind--)
   {
      aux=vet[7-ind];
      vet[7-ind]=vet[ind];
      vet[ind]=aux;
   printf("\nSaida [%d] = %d\n", ind, vet[ind]);
   }


}
