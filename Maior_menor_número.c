#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float num1, num2;
	
	printf("Digite o valor de seu primeiro número: \n");
	scanf("%f", &num1);
	
	printf("Digite o valor de seu segundo número: \n");
	scanf("%f", &num2);
	
	if(num1>num2)
	{
		printf("O primeiro número é maior que o segundo\n");
	}
	else if(num1<num2)
	{
		printf("O segundo número é maior que o primeiro\n");
	}	
	else
	{
		printf("Os dois números são iguais\n");
	}

	return 0;
}
