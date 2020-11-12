#include<stdio.h>

main()
{	
	int san1, san2;

	printf("Digite o primeiro valor \n");
	scanf("%d", &san1);
	printf("Digite o segundo valor \n");
	scanf("%d", &san2);
	
	if (san1 > san2)
	{
		printf("%d maior que %d", san1, san2);
	}
	else
		if (san1 < san2)
		{
			printf("%d maior que %d", san2, san1);
		}
		else
		{
			printf("%d e %d são IGUAIS!", san1, san2);
		}
}
