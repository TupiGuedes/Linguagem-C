#include<stdio.h>

// Matriz

main()
{
	int mat[2][2], lin, col;	
	
	for (lin=0; lin<2; lin++)
	{
		for (col=0; col<2; col++)
		{
			printf("Linha: %d Coluna: %d \n", lin+1, col+1);
			scanf("%d", &mat[lin][col]);
		}
	}
	
	for (lin=0; lin<2; lin++)
	{
		printf("\n");
		printf("[");
		for (col=0; col<2; col++)
		{
			printf(" %d ", mat[lin][col]);
		}
		printf("]");
	}
	

}

