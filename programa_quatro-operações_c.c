#include <stdio.h>//biblioteca de entrada e saída
#include <stdlib.h>//biblioteca de alocação de memória
#include <locale.h>//biblioteca de região

main()
{
	setlocale(LC_ALL , "portuguese");
	/*criando variaveis
	programador Luan*/
	float a=10, b=5, x, y, z, w;
	printf("programa das quatro operações\n");
	printf("o valor de A é:%.2f\n", a);
	printf("o valor de b é:%.2f\n", b);
	x= a+b;
	y= a-b;
	z= a*b;
	w= a/b;
	printf("a soma de A e B é:%.2f\n",x);
	printf("a subtração de A e B é:%.2f\n",y);
	printf("a multiplicação de A e B é:%.2f\n",z);
	printf("a divisão de A e B é:%.2f\n",w);
	system("pause");
}
