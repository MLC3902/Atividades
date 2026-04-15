#include <stdio.h>

int main()
{
	float quant_fitas_total_inicio, fitas_recolocadas, fitas_estragadas, fitas_ano_todo;
	
	printf("Digite a quantidade total de fitas: ");
	scanf ("%f", &quant_fitas_total_inicio);
	
	fitas_estragadas = 2*quant_fitas_total_inicio/100;
	
	fitas_recolocadas = quant_fitas_total_inicio/10;

	fitas_ano_todo = quant_fitas_total_inicio+fitas_recolocadas-fitas_estragadas;
	
	printf("A quantidade de fitas que ter-se-a no final do ano sera: %f", fitas_ano_todo);
	
	return 0;
}
