#include<stdio.h>

main()
{
	int i, x[10];
	
	for (i=0; i<=10; i++)
	{
		printf("Digite um valor \n");
		scanf("%d", &x[i]);
	}
	for (i=0; i<=10; i++)
	{
		printf("\n%d \n", x[i]);
	}
}
