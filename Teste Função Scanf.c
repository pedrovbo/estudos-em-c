#include <stdio.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Entre com um número inteiro:\n");
	
	scanf("%d", &numero);
	
	printf("O valor informado pelo usuário foi %d.\n", numero);
	
}
