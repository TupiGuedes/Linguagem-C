#include<stdio.h>

main()
{
	int i, altura, menor;
	
	for (i=1; i<=5; i++)
	{
		printf("Digite sua altura \n");
		scanf("%d", &altura);
		
		if (i == 1)
		{
			menor = altura;
		}
		else
			if (altura < menor)
			{
				menor = altura;
			}
			else
			{
				menor = menor;
			}
	}
	printf("A menor pessoa mede: %d", altura);
}
