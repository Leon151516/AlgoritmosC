#include <stdio.h>//biblioteca de entrada e sa�da
#include <stdlib.h>//biblioteca de aloca��o de mem�ria
#include <locale.h>//biblioteca de regi�o

main()
{
	setlocale(LC_ALL , "portuguese");
	/*criando variaveis
	programador Luan*/
	int a=10, b=5, r;
	printf("programa da multiplica��o\n");
	printf("o valor de A �:%d\n", a);
	printf("o valor de b �:%d\n", b);
	r= a*b;
	printf("a multiplica��o de A e B �:%d\n",r);
	system("pause");
}
