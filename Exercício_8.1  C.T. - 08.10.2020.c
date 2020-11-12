#include<stdio.h>

main()
{
	int i, c, ida, a_natal, a_tual;
	
	printf("Digite o ano atual \n");
	scanf("%d", &a_tual);
	
	for (i=0; i<=20;)
	{
		printf("Digite o ano de nascimento \n");
		scanf("%d", &a_natal);
		
		ida = a_tual - a_natal;
		
		if (ida >= 18)
		{
			printf("Maior de idade \n");
			c++;
			printf("Total: %d \n", c);
		}
		else
		{
			printf("Menor de idade \n");
		}
	}
}
