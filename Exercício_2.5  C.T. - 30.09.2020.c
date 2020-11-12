#include<stdio.h>

main()
{
	int n1;
	
	printf("Digite um número \n");
	scanf("%d", &n1);
	
	if (n1 > 0) 
	{
		printf("%d -> positivo", n1);
	}
	else
	{
		printf("%d ->  negativo", n1);
	}
}
