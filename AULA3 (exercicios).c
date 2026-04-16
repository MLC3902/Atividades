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


#include <stdio.h>          //Quarta questão
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float raio, altura, vol, preco_vasilha;
	printf("\nDigite o raio da vasilha em centímetro cúbico: \n");
	scanf("%f", &raio);
	
	printf("\nDigite a altura da vasilha: ");
	scanf("%f", &altura);
	
	vol = pow(raio, 2)*3.14*altura; 
	
	printf("\nO volume resultante em centímetros cúbicos: %.2f\n", vol);	
	preco_vasilha = 0.2*vol;
	
	printf("O preco da vasilha é: %.2f", preco_vasilha);
	return 0;
}
