#include<stdio.h>

main()
{
	int i, c, ida;
	
	for (i=0; i=50;)
	{
		printf("-------------------\nDigite sua idade \n");
		scanf("%d", &ida);
		
		if (ida >= 18)
		{
			c++;
			printf("Maior de idade \n\nQuantidade: %d\n\n", c);
		}
		else
		{
			printf("Menor de idade \n");
		}
	}
}
