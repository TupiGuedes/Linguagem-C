#include<stdio.h>

main()
{
	int mat1[2][2]; 
	int mat2[2][2];
	int s[2][2], l, c;
	
	printf("Primeira matriz \n");
	for (l=0; l<2; l++)
	{
		for (c=0; c<2; c++)
		{
			printf("%d linha da %d coluna \n", l+1, c+1);
			scanf("%d", &mat1[l][c]);
		}
	}
	
	printf("\nSegunda matriz \n");
	for (l=0; l<2; l++)
	{
		for (c=0; c<2; c++)
		{
			printf("%d linha da %d coluna \n", l+1, c+1);
			scanf("%d", &mat2[l][c]);			
		}			
	}
	
	for (l=0; l<2; l++)
	{
		for (c=0; c<2; c++)
		{
			s[l][c] = mat1[l][c] + mat2[l][c];
		}
	}
	
	// Valor da soma
	for (l=0; l<2; l++)
	{
		printf("\n|");
		for (c=0; c<2; c++)
		{
			printf(" %d ", s[l][c]);
		}
		printf("|");
	}
	
	
	
	
}
