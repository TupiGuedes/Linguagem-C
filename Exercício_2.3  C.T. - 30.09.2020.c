#include<stdio.h>

main()
{
	int n1, n2, soma;
	
	printf("Digite o primeiro valor \n");
	scanf("%d", &n1);
	printf("Digite o segundo valor \n");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	
	if (soma % 2 == 0)
	{
		printf("%d -> par", soma);
	}
	else
	{
		printf("%d -> impar", soma);
	}
}

