#include<stdio.h>

main()
{
	int i, n[5], c=0, q=0, soma;
	
	float m;
	
	for (i=0; i<5; i++)
	{
		printf("Digite sua idade \n");
		scanf("%d", &n[i]);
	}
	
	for (i=0; i<5; i++)
	{
		if (n[i] >= 18)
		{
			q++;
			
			soma = soma + n[i];
		}
		else
		{
			c++;
		}
	}
	
	m = soma / q;
	
	printf("A quantidade de menores de idade: %d \nA media de maiores de idade: %f", c, m);
}


