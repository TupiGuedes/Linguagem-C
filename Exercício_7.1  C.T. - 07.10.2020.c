#include<stdio.h>

main()
{
	int i;
	
	for (i=0; i<=20; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d -> par \n", i);
		}
		else
		{
			printf("%d -> impar \n", i);
		}
	}
}
