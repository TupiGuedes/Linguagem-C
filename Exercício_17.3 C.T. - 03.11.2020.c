#include<stdio.h>

main()
{
	int mat1[4][4]; 
	int mat2[4][4];
	int s[4][4], l, c;
	
	printf("Primeira matriz \n");
	for (l=0; l<=4; l++)
	{
		for (c=0; c<4; c++)
		{
			printf("%d linha da %d coluna \n", l+1, c+1);
			scanf("%d", &mat1[l][c]);
		}
	}
	
	printf("\nSegunda matriz \n");
	for (l=0; l<4; l++)
	{
		for (c=0; c<4; c++)
		{
			printf("%d linha da %d coluna \n", l+1, c+1);
			scanf("%d", &mat2[l][c]);			
		}			
	}
	// Resultado das Somas
	for (l=0; l<4; l++)
	{
		for (c=0; c<4; c++)
		{
			s[l][c] = mat1[l][c] + mat2[l][c];
		}
	}
	
	// Valor da soma
	for (l=0; l<4; l++)
	{
		printf("\n|");
		for (c=0; c<4; c++)
		{
			if (s[l][c] % 2 == 0)
			{
				printf(" %d ", s[l][c]);
			}
			if (s[l][c] % 2 == 1) 
			{
				printf(" %d ", s[l][c]);
			}
		}
		printf("|");
	}
}
