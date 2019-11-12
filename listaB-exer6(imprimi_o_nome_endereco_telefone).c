#include <string.h>
#include <stdio.h>
#include <stdlib.h>

 int main (void)
{
	char nome[100];
	char endereco[150];
	int telefone;
	
	printf("Digite seu nome:");
	scanf("%s",nome);
	printf("Digite seu endereco:");
	scanf("%s",endereco);
	printf("Digite seu telefone:");
	scanf("%d",telefone);

	printf("Nome:%s endereco:%s Telefone:%d \n",nome,endereco,telefone);
	system("pause");
	return 0;
}

