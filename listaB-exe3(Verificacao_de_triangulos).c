#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (void)
{ 
  int lado1, lado2, lado3;
  
  printf("Digite o primeiro lado do triangulo:\n");
  scanf ("%d", &lado1);
  printf("Digite o segundo lado do triangulo:\n");
  scanf ("%d", &lado2);
  printf("Digite o terceiro lado do triangulo:\n");
  scanf ("%d", &lado3);

  if (lado1+lado2 <= lado3 && lado1+lado3 <= lado2 && lado2+lado3 <= lado1);
 {
   printf("Esse valores nao sao os lados de um triangulo");

    if (lado1==lado2 && lado2==lado3) {
        printf("Esse triangulo é equilatero.");
  }
    if (lado1==lado2 || lado2==lado3 || lado3==lado1) { 
    	printf("Esse triangulo e isoceles");
  }
    if (lado1 != lado2 && lado2 != lado3 && lado3!= lado1){
    	printf("Esse triangulo e escaleno");
  }
 
 }


  system ("pause");
  return 0;
}
