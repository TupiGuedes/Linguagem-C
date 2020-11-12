#include<stdio.h>

main()
{
	int i;
	for (i=0; i<=10; i++)
	{
		int n1, n2;
		float m;
	
		printf("\nDigite o primeiro valor \n");
		scanf("%d", &n1);
		printf("Digite o segundo valor \n");
		scanf("%d", &n2);
		
		m = (n1 + n2) / 2;
	
		if (m >= 7)
		{
			printf("APROVADO");
		}
		else
		{
			printf("REPROVADO");
		}
	}
}

