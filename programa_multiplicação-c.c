#include <stdio.h>//biblioteca de entrada e saída
#include <stdlib.h>//biblioteca de alocação de memória
#include <locale.h>//biblioteca de região

main()
{
	setlocale(LC_ALL , "portuguese");
	/*criando variaveis
	programador Luan*/
	int a=10, b=5, r;
	printf("programa da multiplicação\n");
	printf("o valor de A é:%d\n", a);
	printf("o valor de b é:%d\n", b);
	r= a*b;
	printf("a multiplicação de A e B é:%d\n",r);
	system("pause");
}
