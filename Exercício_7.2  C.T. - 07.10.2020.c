#include<stdio.h>

main()
{
	int i, c = 0,idade;
	
	for (i=0; i<=75;)
	{	
		printf("Digite sua idade \n");
		scanf("%d", &idade);
		
		if (idade >= 18)
		{
			c++;
			printf("Maior de idade \nQuantidade = %d \n", c);
		}
		else
		{
			printf("Menor de idade \n");
		}
		printf("\n");
	}
}
