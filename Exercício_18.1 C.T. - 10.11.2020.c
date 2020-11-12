#include<stdio.h>

vai(int x)
{
	int i;
	for (i=1; i<=x; i++)
	{
		printf("*");	
	}	
}

main()
{
	int i;
	
	vai(2);
	printf("\nNumeros entre 1 e 5\n");
	vai(2);	
	
	for (i=1; i<=5; i++)
	{
		printf("\n%d\n", i);	
	}
	
	vai(2);	
}

