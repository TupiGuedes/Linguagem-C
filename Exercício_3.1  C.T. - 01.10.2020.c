#include<stdio.h>

main()
{
	int n1;
	
	printf("Digite o primeiro valor \n");
	scanf("%d", &n1);	
	
	if (n1 > 50)
	{
		printf("%d -> maior que 50", n1);
	}
	else
		if (n1 < 50)
		{
			printf("%d -> menor que 50", n1);
		}
		else
		{
			printf("%d = 50", n1);
		}
}
