#include <stdio.h>
#include <locale.h>

int main()       //    Questão 1
{
	setlocale(LC_ALL, "Portuguese_Brazil");
		
	int resposta, numero;
	
	do{
		printf("\nDigite seu número de três digitos: \n");
		resposta = scanf("%d", &numero);
		
		if (resposta != 1){
			printf("\nAssim não seu analfabeto funcional\n");
			while(getchar() != '\n');
		}
		
		else if (numero<100 || numero>999){
			printf("\nÉ SÓ TRÊS DÍGITOS SEU ACÉFALO!\n");
		}
			
	} while (resposta != 1|| numero<100 || numero>999);
	printf("\nObrigada por digitar corretamente. \n Esse foi seu número registrado: %d", numero);	
		
	return 0;
}
