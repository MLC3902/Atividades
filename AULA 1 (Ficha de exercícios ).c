
#include<stdio.h>

int main(){                            //Primeira questão (valor gasto na conta de restaurante mais a taxa de serviço)
 float valor_gasto, total;

 printf("Digite o valor gasto: ");
 scanf("%f", &valor_gasto);
 
 total = valor_gasto + valor_gasto/10;
 
 printf("Gasto Total: %f", total);

 return 0;
}
 
 int main(){                                        //Segunda questão (gasto de gasolina em uma viagem)
 
 float tempo, vel_media, distancia, gasto_total;
 printf("Digite o tempo gasto em hora: ");
 scanf("%f", &tempo);
 
 printf("Digite a velocidade media em km por hora: ");
 scanf("%f", &vel_media);
 
 distancia = vel_media*tempo; 
 gasto_total = distancia*12;
 printf("O gasto total em litros eh: %f", gasto_total);
 
 return 0;
 }

#include <stdio.h>  //Terceira questão letra B

int main()
{
	float preco_unit_fita, preco_unit_com_atraso, fitas_atrasadas, fitas_alugadas_mes, val_ganho_mes_multa;
	
	printf("\n Digite o valor de fitas alugadas por mes: \n");
	scanf("%f", &fitas_alugadas_mes);
	
	fitas_atrasadas = fitas_alugadas_mes/10 ; 
	
	printf("\n Digite o valor unitario por fita: \n");
	scanf("%f", &preco_unit_fita);
	
	preco_unit_com_atraso = preco_unit_fita + preco_unit_fita/10;
	
	val_ganho_mes_multa = preco_unit_com_atraso*fitas_atrasadas;
	
	printf("O valor total ganho com fitas atrasadas eh: %f", val_ganho_mes_multa);
	
	return 0;
}


#include <stdio.h>  //Terceira questão letra A

int main()
{
	float quant_fitas_mes, fitas_alugadas, fat_anual, preco_fita;
	
	printf("Digite a quantidade de fitas na loja: ");
	scanf("%f", &quant_fitas_mes);
	
 	fitas_alugadas = quant_fitas_mes/3; 
 	
 	fat_anual= fitas_alugadas*12;
 	
 	printf("O faturamento anual: %f", fat_anual);
 	
	return 0;
}

#include <stdio.h>  //Terceira questão letra C

int main()
{
	float quant_fitas_total_inicio, fitas_recolocadas, fitas_estragadas, fitas_ano_todo;
	
	printf("Digite a quantidade total de fitas: ");
	scanf ("%f", &quant_fitas_total_inicio);
	
	fitas_estragadas = 2*quant_fitas_total_inicio/100;
	
	fitas_recolocadas = quant_fitas_total_inicio/10;

	fitas_ano_todo = quant_fitas_total_inicio+fitas_recolocadas-fitas_estragadas;
	
	printf("A quantidade de fitas que ter-se-a no final do ano sera: %.2f", fitas_ano_todo);
	
	return 0;
}
