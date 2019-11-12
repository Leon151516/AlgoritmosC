#include <stdio.h>//biblioteca de entrada e saída
#include <stdlib.h>//biblioteca de alocação de memória
#include <locale.h>//biblioteca de região

main()
{
	setlocale(LC_ALL , "portuguese");
	/*criando variaveis
	programador Luan*/
	float c=10, f;
	printf("programa de conversão de temperatura\n");
	printf("o valor dos graus celsius é: %.2f\n", c);
	f= (9*c+160)/5;
	printf("a conversão de celsius para fahrenheit é: %.2f\n", f);
	system("pause");
	return 0;
}
