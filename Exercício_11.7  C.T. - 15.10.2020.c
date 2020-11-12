#include<stdio.h>

main()
{
	int i=0, ida, menor, maior;
	
	while (i <= 5)
	{
		printf("Digite a %d idade \n", i);
		scanf("%d", &ida);
		
		if (i == 0)
		{
			maior = 0;
			menor = 0;
		}
		else
			if (maior < menor)
			{
				maior = ida;
			}
			else
			{
				menor = ida;
			}
			
		i++;
	}	
	printf("A idade da menor pessoa: %d o maior: %d", menor, maior);
}
