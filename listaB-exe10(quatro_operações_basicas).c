#include <stdio.h>
#include <stdlib.h>

float main (void)
{ 
    float n1,n2,R;
    printf("Digite o primeiro numero:");
    scanf("%f",&n1);
    printf("Digite o segundo numero:");
    scanf("%f",&n2);
    R=n1-n2;
    printf("\nA subtracao dos dois numero e:%f", R);
    R=n1+n2;
    printf("\nA soma dos dois numero e:%f", R);
    R=n1*n2;
    printf("\nA multiplicacao dos dois numero e:%f", R);
    R=n1/n2;
    printf("\nA divisao dos dois numero e:%f", R);
    
    system("pause");
    return 0;
}
