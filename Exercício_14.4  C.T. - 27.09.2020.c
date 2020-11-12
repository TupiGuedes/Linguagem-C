#include<stdio.h>

main()
{
	int i, posi, n[5], maior;
	
	for (i=0; i<5; i++)
	{
		printf("Digite um numero \n");
		scanf("%d", &n[i]);	
	}	
	
	for (i=0; i<5; i++)
	{
		if (n[i] > maior)
		{
			maior = n[i];
				
			posi = i;
		}
	}
	printf("\nO maior valor: %d \nA posição: %d", maior, posi+1);
}
