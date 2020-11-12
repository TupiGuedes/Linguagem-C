#include<stdio.h>

main()
{
	int i, par, imp, c, n;
	
	for (i=0; i<5; i=i+1)
	{
		printf("Digite um valor \n");
		scanf("%d", &n);
		
		if (i % 2 == 0)
		{
			par = par + n;
		}
		else
		{
			imp = imp + 1;
		}
	}
	printf("A soma dos numeros pares: %d \n", par);
	printf("Quantidade de numeros impares: %d \n", imp);
}
