#include <stdio.h>//biblioteca de entrada e sa�da
#include <stdlib.h>//biblioteca de aloca��o de mem�ria
#include <locale.h>//biblioteca de regi�o

main()
{
	setlocale(LC_ALL , "portuguese");
	/*criando variaveis
	programador Luan*/
	float c=10, f;
	printf("programa de convers�o de temperatura\n");
	printf("o valor dos graus celsius �: %.2f\n", c);
	f= (9*c+160)/5;
	printf("a convers�o de celsius para fahrenheit �: %.2f\n", f);
	system("pause");
	return 0;
}
