#include<stdio.h>

main()
{
	int i=0, n, c=1;
	
	while (i <= 50)
	{
		printf("Digite um valor \n");
		scanf("%d", &n);
		
		if (n > 18)
		{
			printf("Maior de idade \n");
			
			printf("Quantidade de maiores de idade %d \n", c);	
			
			c++;
		}
		else
		{
			printf("Menor de idade \n");
		}
		
		i++;
	}
}
