#include<stdio.h>

main()
{
	int n[5], i;
	
	for (i=0; i<=5; i++)
	{
		printf("Digite um numero \n");
		scanf("%d", &n[i]);
	}
	
	for (i=0; i<=5; i++)
	{
		printf("%d \n", n[i]);
	}	
}

