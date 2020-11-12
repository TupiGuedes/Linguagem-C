#include<stdio.h>

main()
{
	int i=1, n, maior;
	
	while (i<=5)
	{
		printf("Digite o %d numero \n", i);
		scanf("%d", &n);
		
		if (i == 1)
		{
			maior = n;
		}
		else 
			if (n > maior)
			{
				maior = n;
			}
			
		i++;	
	}
	printf("O maior valor: %d", maior);
}

