#include<stdio.h>

main()
{
	int mat1[2][2], lin_a1, col_a2; 
	int mat2[2][2], lin_b1, col_b2;
	
	printf("Primeira matriz \n");
	for (lin_a1=0; lin_a1<2; lin_a1++)
	{
		for (col_a2=0; col_a2<2; col_a2++)
		{
			printf("%d linha da %d coluna \n", lin_a1+1, col_a2+1);
			scanf("%d", &mat1[lin_a1][col_a2]);
		}
	}
	
	printf("\nSegunda matriz \n");
	for (lin_b1=0; lin_b1<2; lin_b1++)
	{
		for (col_b2=0; col_b2<2; col_b2++)
		{
			printf("%d linha da %d coluna \n", lin_b1+1, col_b2+1);
			scanf("%d", &mat2[lin_b1][col_b2]);			
		}			
	}
	
	// Mostrar os valores das matrizes 1 e 2
	printf("Resultado da primeira matriz \n");
	for (lin_a1=0; lin_a1<2; lin_a1++)
	{
		printf("\n[");
		for (col_a2=0; col_a2<2; col_a2++)
		{
			printf(" %d ", mat1[lin_a1][col_a2]);
		}
		printf("]");
	}
	
	printf("\n \nResultado da segunda matriz");
	for (lin_b1=0; lin_b1<2; lin_b1++)
	{
		printf("\n[");
		for (col_b2=0; col_b2<2; col_b2++)
		{
			printf(" %d ", mat2[lin_b1][col_b2]);
		}
		printf("]");
	}
}
