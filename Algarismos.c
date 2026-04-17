#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int num, cent, dezen, unid;
	
	do{
		printf("Digite seu número de três dígitos: \n");
		scanf("%d", &num);
		
		if (num>=100 && num<=999){
			cent = num / 100;
			dezen = (num/ 10)% 10;
			unid= num%10;
			
			printf("A unidade do seu número é: %d\n", unid);
			printf("A dezena do seu número é: %d\n", dezen);
			printf("A centena do seu número é: %d\n", cent);
		
		}		
		else
		{
			printf("Seu número deve ter somente três dígitos.");
		}
		
	} while (num<100 || num>999);
	
	return 0;
}
