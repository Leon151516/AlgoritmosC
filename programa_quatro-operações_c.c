#include <stdio.h>//biblioteca de entrada e sa�da
#include <stdlib.h>//biblioteca de aloca��o de mem�ria
#include <locale.h>//biblioteca de regi�o

main()
{
	setlocale(LC_ALL , "portuguese");
	/*criando variaveis
	programador Luan*/
	float a=10, b=5, x, y, z, w;
	printf("programa das quatro opera��es\n");
	printf("o valor de A �:%.2f\n", a);
	printf("o valor de b �:%.2f\n", b);
	x= a+b;
	y= a-b;
	z= a*b;
	w= a/b;
	printf("a soma de A e B �:%.2f\n",x);
	printf("a subtra��o de A e B �:%.2f\n",y);
	printf("a multiplica��o de A e B �:%.2f\n",z);
	printf("a divis�o de A e B �:%.2f\n",w);
	system("pause");
}
