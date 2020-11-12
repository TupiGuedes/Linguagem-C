#include<stdio.h>

main()
{
	int s;
	
	for (s = 0; s <=5;)	// Repetidor de todo o programa
	{
		int opc;
		
		printf("Digite 1: para mostrar a quantidade de positivos digitados \n");
		printf("Digite 2: para mostrar a quantidade de negativo digitados \n");
		printf("Digite 3: para mostrar a quantidade de nulos \n");
		printf("Digite sua opção \n");
		scanf("%d", &opc);
		
		int i, c = 0, lim, num;
		
		if (opc == 1)	// Quantidade de nº Positivos
		{	
			printf("Digite o limite \n");	// Delimitador 01
			scanf("%d", &lim);
			
			for (i = 0; i <= lim;)
			{
				printf("Digite um numero \n");
				scanf("%d", &num);
				
				if (num > 0)
				{
					c++;
					printf("POSITIVO \n");
					printf("Quantidade de nº positivos -> %d \n", c);
				}
				else 
					if (num < 0)
					{
						printf("Negativo \n");
					}
					else 
					{
						printf("Nulo \n");
					}
			}
		}
		if (opc == 2)	// Quantidade de nº Negativos
		{
			printf("Digite o limite \n");	// Delimitador 02
			scanf("%d", &lim);
			
			for (i = 0; i <= lim;)
			{
				printf("Digite um número \n");
				scanf("%d", &num);
				
				if (num > 0)
				{
					printf("POSITIVO \n");
				}
				else
					if (num < 0)
					{
						c++;
						printf("NEGATIVO \n");
						printf("Quantidade de nº negativos -> %d \n", c);
					}
					else
					{
						printf("NULO \n");
					}
			}
		}
		if (opc == 3)	// Quantidade de nº Nulos
		{
			printf("Digite o limite \n");	// Delimitador 03
			scanf("%d", &lim);
			
			for (i = 0; i <= lim;)
			{
				printf("Digite um número \n");
				scanf("%d", &num);
				
				if (num > 0)
				{
					printf("POSITIVO \n");
				}
				else
					if (num < 0)
					{
						printf("NEGATIVO \n");
					}
					else 
					{
						c++;
						printf("NULO \n");
						printf("Quantidade de nº nulos -> %d \n", c);
					}
			}
		}
	}
}
