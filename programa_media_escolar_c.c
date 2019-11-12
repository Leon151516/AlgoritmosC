#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "portuguese,brazil");
	/*criando variaveis
	programador Luan*/
	float na1,na2,na3,na4,fa,media,sm;
	printf("Programa de média escolar\n");
	printf("Digite a primeira nota do aluno:\n");
	scanf("%f", &na1);
	printf("Digite a segunda nota do aluno:\n");
	scanf("%f", &na2);
	printf("Digite a terceira nota do aluno:\n");
	scanf("%f", &na3);
	printf("Digite a quarta nota do aluno:\n");
	scanf("%f", &na4);
	sm= na1+na2+na3+na4;
	printf("A soma da media do aluno é: %.2f\n", sm);
	media= sm/4;
	printf("A media do aluno é: %.2f\n", media);
	fa= 7-media;
	if (media>=7)
	{
	printf("Aluno aprovado\n");	
	}
	else
	if (media>=3.1 && media<=6.9)
	{
	printf("Aluno com media %.2f está de recuperação, faltou: %.2f de nota para ser aprovado\n", media, fa);	
	}
	else
	if (media>0 && media<=3)
	{
	printf("Aluno com media %.2f está reprovado, faltou: %.2f de nota para ser aprovado\n", media, fa);
	}
	system("pause");
	return 0;
}
