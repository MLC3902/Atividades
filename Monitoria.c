#include <stdio.h>

int main()
{
	int num = 1;
	
	while(num>0 && num<6)
	{
	printf("Digite seu numero: ");
	scanf("%d", &num);
	} 
	
	
	return 0;
}


#include <stdio.h>

/*int main()
{
	int i;
	
	for (i=1; i<=10; i++){
		
		printf("%d\n", i*5);
	}
	
	i = 1
	while (i <= 10){
		// codigo
		i++
	}
	
	return 0;
}*/


#include <stdio.h>

int main()
{
	int num, aux, i;
	
	aux = 0;
	
	for (i = 10; i>0 ;i-- ){
		printf ("Digite seu numero: ");
		scanf("%d", &num);
		
		if (aux< num){
			aux = num;
			
		}
		
	}
				
	printf("O maior valor eh: %d", aux);			
	
	return 0;
}

#include <stdio.h>

int main()
{
	int num = 1;
	
	while(num!=0)
	{
	printf("Digite seu numero: ");
	scanf("%d", &num);
	printf("%d\n", num);
	} 
	
	return 0;
}
