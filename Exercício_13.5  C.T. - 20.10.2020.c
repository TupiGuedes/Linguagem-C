#include<stdio.h>

main()
{
	int i, n[5], par;
	
	
	for (i=0; i<5; i++)
	{
		printf("Digite o um valor \n");
		scanf("%d", &n[i]);	
	}
	
	for (i=0; i<5; i++)
	{
		if (n[i] % 2 == 0)
		{
			printf("Os numeros pares: %d \n posi�ao: %d\n", n[i], i+1);
		}
	}
}
