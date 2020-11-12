#include<stdio.h>

main()
{
	int n1, n2, opc, m;
	
	printf("Digite o primeiro valor \n");
	scanf("%d", &n1);
	printf("Digite o segundo valor \n");
	scanf("%d", &n2);
	
	printf("Menu de curso");
	printf("Digite 1: Sistema de informação");
	printf("Digite 2: ADM");
	printf("Digite 3: Fisioterapia");
	printf("Digite 4: Direito");
	printf("Digite a opção \n");
	scanf("%d", &opc);

	switch(opc)
	{
		case 1:
			m = (n1 + n2) / 2;
			
			if (media >= 7)
			{
				printf("APROVADO");
			}
			else
			{
				printf("REPROVADO");
			}
		case 2:
			m = (n1 + n2) / 2;
			
			if (media >= 5)
			{
				printf("APROVADO");
			}
			else
			{
				printf("REPROVADO");
			} 
		case 3:
			m = (n1 + n2) / 2;

			if (media >= 8)
			{
				printf("APROVADO");
			}
			else
			{
				printf("REPROVADO");
			} 
		case 4:
			m = (n1 + n2) / 2;

			if (media >= 9)
			{
				printf("APROVADO");
			}
			else
			{
				printf("REPROVADO");
			} 
	}
}

