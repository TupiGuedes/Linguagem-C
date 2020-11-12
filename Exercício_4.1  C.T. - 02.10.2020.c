#include<stdio.h>

main()
{
	float n1, n2, n3, med;
	
	printf("Nota 1º \n");
	scanf("%f", &n1);
	printf("Nota 2° \n");
	scanf("%f", &n2);
	printf("Nota 3° \n");
	scanf("%f", &n3);
	
	med = (n1 + n2 + n3) / 3;
	
	if (med >= 7)
	{
		printf("APROVADO!: %.2f", med);
	}
	else 
		if (med >= 5 && med < 7)
		{
			printf("RECUPERAÇÃO: %.2f", med);
		}
		else 
		{
			printf("REPROVADO!: %.2f", med);
		}
}
