#include<stdio.h>
#include<math.h>

main()
{
	int i, n[5], c[5], q[5];
	
	for (i=0; i<5; i++)
	{
		printf("Digite um numero \n");
		scanf("%d", &n[i]);
	}
	
	printf("Calculo do quadrado \n");
	
	for (i=0; i<5; i++)
	{
		q[i] = pow(n[i], 2);
		
		printf("%d elevado a 2 = %d \n", n[i], q[i]);
	}
	
	printf("\nCalculo do cubo \n");
	
	for (i=0; i<5; i++)
	{
		c[i] = pow(n[i], 3);
		
		printf("%d elevado a 3 = %d \n", n[i], c[i]);
	}
}
