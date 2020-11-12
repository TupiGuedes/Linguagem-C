#include<stdio.h>

main()
{
	int i, n[5], imp=0, posi;
	
	for (i=0; i<5; i++)
	{
		printf("Digite um valor \n");
		scanf("%d", &n[i]);
	}
	
	for (i=0; i<5; i++)
	{
		if (n[i] % 2 == 1)
		{
			imp++;
		}
		if (n[i] > 0)
		{
			posi++;
		}
	}
	printf("A quantidade de numeros impares: %d \nQuantidade de numeros positivos: %d \n", imp, posi);
}
