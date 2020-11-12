#include<stdio.h>

main()
{
	int i=0, n, par=0, imp=0;
	
	while (i<=5)
	{
		printf("Digite um numero \n");
		scanf("%d", &n);
		
		if  (n % 2 == 0)
		{
			par = par + n;
		}
		else
		{
			imp++;
		}
		i++;
	}
	printf("IMPAR \nQuantidade: %d \n", imp);
	printf("PAR! \nSoma: %d \n", par);
	printf("Fim");
}
