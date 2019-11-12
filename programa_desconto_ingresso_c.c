#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "portuguese,brazil");
	/*criando variaveis
	programador Luan*/
	float ingresso, d1, d2, d3, d4;
	int idade;
	printf("programa de desconto de ingresso\n");
	printf("Digite o valor do ingresso:\nR$ ");
	scanf("%f", &ingresso);
	printf("Digite a idade:\n");
	scanf("%d", &idade);
	if (idade>0 && idade<6)
	{
		d1= ingresso*0.85;
		printf("o preço do ingresso com 15%% desconto é: R$ %.2f\n", d1);
	}
	else if (idade>5 && idade<21)
	{
		d2= ingresso*0.95;
		printf("o preço do ingresso com 5%% desconto é:R$ %.2f\n", d2);
	}
	else if (idade>20 && idade<41)
	{
		d3= ingresso*0.98;
		printf("o preço do ingresso com 2%% desconto é:R$ %.2f\n", d3);
	}
	else
	{
		d4= ingresso*0.70;
		printf("o preço do ingresso com 30%% desconto é:R$ %.2f\n", d4);
	} 
	system("pause");
	return 0;
}
