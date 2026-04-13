#include <stdio.h>

int main()
{
	 float num1, num2, soma, subtracao, multiplicacao, divisao;
 	 printf(" Digite seu primeiro numero: \n");
 	 scanf("%f", &num1);
	 printf(" Digite o segundo numero: \n");
	 scanf("%f", &num2);
	 
	 soma = num1 + num2;
	 subtracao = num1 - num2;
	 multiplicacao = num1 * num2;
	 divisao = num1 / num2; 
	 
	printf("Soma = %f \n", soma);
	printf("Subtracao = %f \n", subtracao);
	printf("Multiplicacao = %f \n", multiplicacao);
	printf("Divisao = %f \n", divisao);
	 
	return 0;
}
