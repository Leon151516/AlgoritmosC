#include <stdio.h>//biblioteca de entrada e sa�da
#include <stdlib.h>//biblioteca de aloca��o de mem�ria
#include <locale.h>//biblioteca de regi�o

main()
{
	setlocale(LC_ALL , "portuguese");
	/*criando variaveis
	programador Luan*/
	float a=10, b=5, r;
	printf("programa da divis�o\n");
	printf("o valor de A �:%.2f\n", a);
	printf("o valor de b �:%.2f\n", b);
	r= a/b;
	printf("a divis�o de A e B �:%.2f\n", r);
	system("pause");
}
