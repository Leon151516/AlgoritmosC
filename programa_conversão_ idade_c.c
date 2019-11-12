#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "portuguese,brazil");
	/*criando variaveis
	programador Luan*/
	float anos, dias;
	printf("programa de conversão de idade \n");
	printf("insira sua idade em anos: ");
	scanf("%f", &anos);
	dias= (anos*365);
	printf("sua idade convertida em dias é: %.0f\n", dias);
	system("pause");
	return 0;
}
