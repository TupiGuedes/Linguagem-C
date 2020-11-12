#include<stdio.h>

main()
{
	int i, n[5], c=0;
	
	for (i=0; i<5; i++)
	{
		printf("Digite um valor \n");
		scanf("%d", &n[i]);
	}
	
	for (i=0; i<5; i++)
	{
		if (n[i] % 2 == 1)
		{
			c = c + n[i];
		}
	}
	printf("%d", c);
}

