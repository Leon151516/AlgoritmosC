#include <stdio.h>// abrindo biblioteca
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL , "portuguese");
	/*criando variaveis
	programador Luan*/
	int a=10, b=5, r;
	printf("programa da soma\n");
	printf("o valor de A �:%d\n", a);
	printf("o valor de b �:%d\n", b);
	r= a+b;
	printf("a soma de A e B �:%d\n",r);
	system("pause");
}
