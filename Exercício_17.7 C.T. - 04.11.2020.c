#include<stdio.h>

main()
{
	int mat[2][2], l, c, i, soma=0, m;
	
	for (l=0; l<2; l++)
	{
		for (c=0; c<2; c++)
		{
			printf("%d coluna da %d linha \n", l+1, c+1);
			scanf("%d", &mat[l][c]);
		}
	}
	
	for (l=0; l<2; l++)
	{
		for (c=0; c<2; c++)
		{
			if (mat[l][c] % 2 == 1)
			{
				soma = soma + mat[l][c];
				i++;	
			}
		}
	}
	
	m = soma / i; 
	printf("A média dos numeros impares: %d", m);
	
}
