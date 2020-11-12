#include<stdio.h>

main()
{
	int lagem1, lagem2, multf1, multf2;
		
	printf("Digite o primeiro valor \n");
	scanf("%d", &lagem1);
	printf("Digite o segundo valor \n");
	scanf("%d", &lagem2);
	
	
	if (lagem1 > lagem2)
	{
		multf1 = lagem1 * 5;
		multf2 = lagem2 * 10;
		
		printf("O valor do maior: %d \nO valor do menor: %d", multf1, multf2);
	}
	else
		if (lagem1 < lagem2)
		{
			multf2 = lagem2 * 5;
			multf1 = lagem1 * 10;
			
			printf("O valor do maior: %d \nO valor do menor: %d", multf2, multf1);
		}
		else
		{
			printf("Os dois valores: iguais!");
		}
}

