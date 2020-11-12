#include<stdio.h>

main()
{
	
	int mat[4][4], l, c;
	
	for (l=0; l<4; l++)
	{
		for (c=0; c<4; c++)
		{
			printf("%d linha da %d coluna \n", l+1, c+1);
			scanf("%d", &mat[l][c]);
		}
	}
	
	printf("Os valores pares presentes na matriz: \n");
	for (l=0; l<4; l++)
	{
		for (c=0; c<4; c++)
		{
			if (mat[l][c] % 2 == 1)
			{
				printf("%d \t", mat[l][c]);
			}
		}
	}
	
	
}
