#include<stdio.h>

main()
{
	int mat[2][2], l, c, i, imp;
	
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
				i++;
				imp = 1;
			}
		}
	}
	
	if (imp == 1)
	{
		printf("A quantidade de numeros impares: %d", i);
	}
	
	
}
