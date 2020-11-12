#include<stdio.h>

main()
{
	int i, n[5];
	
	for (i=0; i<=5; i++)
	{
		printf("Digite um valor \n");
		scanf("%d", &n[i]);
	}

	for (i=0; i<=5; i++)	
	{
		
		if (n[i] % 2 == 0)
		{
			printf("%d \n", n[i]);
		}
	}
}
