#include<stdio.h>

main()
{
	int i=1, n[5], v;
	
	for (i=0; i<5; i++)
	{
		printf("Digite um valor \n");
		scanf("%d", &n[i]);
	}
	printf("\n");
	
	printf("Digite um valor \n");
	scanf("%d", &v);
	
	for (i=0; i<5; i++)
	{
		if (n[i] == v)
		{
			break;
		}
	}
	
	wprintf("Valor %d na posicao %d", v, i+1);
	
	
}
