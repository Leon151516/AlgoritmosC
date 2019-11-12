#include <stdio.h>//biblioteca de entrada e saída
#include <stdlib.h>//biblioteca de alocação de memória
#include <locale.h>//biblioteca de região

main()
{
	setlocale(LC_ALL , "portuguese");
	/*criando variaveis
	programador Luan*/
	float a=10, b=5, r;
	printf("programa da divisão\n");
	printf("o valor de A é:%.2f\n", a);
	printf("o valor de b é:%.2f\n", b);
	r= a/b;
	printf("a divisão de A e B é:%.2f\n", r);
	system("pause");
}
