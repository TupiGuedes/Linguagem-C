#include<stdio.h>

main()
{
	int n1, n2;
	
	printf("Digite o primeiro valor \n");
	scanf("%d", &n1);
	printf("Digite o segundo valor \n");
	scanf("%d", &n2);
	
	if (n1 > n2)
	{
		printf("%d -> maior", n1);
	}
	else
	{
		printf("%d -> maior", n2);
	}
}

