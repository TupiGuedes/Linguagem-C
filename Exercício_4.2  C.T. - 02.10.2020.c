#include<stdio.h>

main()
{
	int n1;
	
	printf("Digite um valor \n");	
	scanf("%d", &n1);
	
	if (n1 > 10)
	{
		printf("O valor digitado � maior que 10");
	}
	else
		if (n1 < 10)
		{
			printf("O valor digitado � menor que 10");
		}	
		else 
		{
			printf("O valor digitado � igual a 10");
		}
}
