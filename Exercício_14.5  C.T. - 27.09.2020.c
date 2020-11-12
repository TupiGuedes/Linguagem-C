#include<stdio.h>

main()
{
	int i, v, n[5], achei, pos;
	
	for (i=0; i<5; i++)
	{
		printf("Digite um valor \n");
		scanf("%d", &n[i]);
	}
	printf("Qual o número foi digitado \n");
	scanf("%d", &v);
	
	for (i=0; i<5; i++)
	{
		if (n[i] == v)
		{
			pos = i;
			
			achei = 1;
		}
	}
	if (achei == 0)
	{
		printf("Valor ausente no vetor \n");
	}
	else
	{
		printf("Valor encontrado na posição: %d", pos);
	}
}
