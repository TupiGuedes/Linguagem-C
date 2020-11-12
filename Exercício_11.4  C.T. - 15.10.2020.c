#include<stdio.h>

main()
{
	int i=0, n;
	
	while (i <= 20)
	{
		printf("Digite o valor \n");
		scanf("%d", &n);
		
		if (n > 18)
		{
			printf("Maior de idade! \n");	
		}	
		else
		{
			printf("Menor de idade \n");
		}
		
		i++;
	}
	printf("Fim");
}
