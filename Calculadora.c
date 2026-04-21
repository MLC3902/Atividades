#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float num1, num2, escolha, resultado1, resultado2, resultado3, resultado4;
	
	printf("Digite seu primeiro número: \n");
	scanf("%f", &num1);	
	
	printf("Digite seu segundo número: \n");
	scanf("%f", &num2);	
	
	printf("\n\nOPERAÇÕES: \n\n");
	printf("\n1-Adição\n");
	printf("\n2-Subtração\n");
	printf("\n3-Multiplicação\n");
	printf("\n4-Divisão\n");	
	printf("\nEscolha qual das operações deseja fazer: \n\n");
	scanf("%f", &escolha);
	
	if(escolha==1){
		resultado1=num1+num2;
		printf("\nO resultado da operação é: %.2f", resultado1);	
	}
	else if(escolha==2){
		resultado2=num1-num2;
		printf("\nO resultado da operação é: %.2f", resultado2);	
	}
	else if(escolha==3)
	{
		resultado3=num1*num2;
		printf("\nO resultado da operação é: %.2f", resultado3);
	}
	else if(escolha==4)
	{
		resultado4=num1/num2;
		printf("\nO resultado da operação é: %.2f", resultado4);
	}
	else
	{
		printf("\nSinto muito. Mas provavelmente você não escolheu nenhuma das opcções anteriores\n");
	}
	
	return 0;
}
