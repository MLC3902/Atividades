#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float media;
	int frequencia;
	
	printf("Digite a média do aluno: \n");
	scanf("%f", &media);
	
	printf("Digite a frequência: \n");
	scanf("%d", &frequencia);

	if (media>=7 && frequencia>=75){
		printf("Meus parabéns! Você passou nessa matéria.\n");
	}
	else{
		printf("Meus pêsames, mas você foi reprovado.\n");
	}
	
	return 0;
}
