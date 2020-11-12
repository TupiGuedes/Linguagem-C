#include<stdio.h>

main()
{
	float n1;
	
	printf("Digite algum numero \n");
	scanf("%f", &n1);
	
	if (n1 > 0)
	{
		printf("%.2f -> Positivo", n1);
	}
	else
		if (n1 < 0)
		{
			printf("%.2f -> Negativo", n1);
		}
		else 
		{
			printf("%.2f -> igual a zero", n1);
		}
}
