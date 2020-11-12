#include<stdio.h>

main()
{
	int i, n[5], soma=0, c;
	
	float m;
	
	for (i=0; i<5; i++)
	{
		printf("Digite um valor \n");
		scanf("%d", &n[i]);
	}
	
	for (i=0; i<5; i++)
	{
		if (n[i] <= 10)
		{
			soma = soma + n[i];
			c++;	
			m = soma / c;
		}	
	}
	printf("Valores menores que 10 \nA soma: %d \nA quantidade: %d \nA média: %d", soma, c, m);
}

