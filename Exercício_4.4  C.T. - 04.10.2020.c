#include<stdio.h>

main()
{
	int n1, n2, n3;
	
	printf("Digite o primeiro valor \n");
	scanf("%d", &n1);
	printf("Digite o segundo valor \n");
	scanf("%d", &n2);
	printf("Digite o terceiro valor \n");
	scanf("%d", &n3);
	
	if (n1 < n2 && n1 < n3)
	{
		printf("O valor digitado: %d é o menor", n1);
	}
	else
		if (n2 < n1 && n2 < n3)
		{
			printf("O valor digitado: %d é o menor", n2);
		}
		else
			if (n3 < n1 && n3 < n2)
			{
				printf("O valor digitado: %d é o menor", n3);
			}
			else
			{
				printf("Todos os valores iguais!");
			}
}
