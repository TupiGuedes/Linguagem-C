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
		printf("&d maior que %d", n1, n2);
	}
	else
		if (n1 < n2)
		{
			printf("%d maior que %d", n2, n1);
		}
		else
		{
			printf("%d = %d", n1, n2);
		}
}
