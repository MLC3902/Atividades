
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
