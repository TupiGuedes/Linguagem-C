#include<stdio.h>

main()
{
	int i, s, n1, n2, opc, sub, mult, div;
	
	while (i != 5)
	{
		printf("Digite o primeiro valor \n");
		scanf("%d", &n1);
		printf("Digite o segundo valor \n");
		scanf("%d", &n2);
		
		printf("Digite [1]: Somar \n");
		printf("Digite [2]: Subtra��o \n");
		printf("Digite [3]: Multiplica��o \n");
		printf("Digite [4]: Divis�o \n");
		printf("Digite [5]: Sair \n");
		printf("Digite sua op��o \n");
		scanf("%d", &opc);
		
		i = opc;
		
		switch (opc)
		{
			case 1: 
				s = n1 + n2;
				
				printf("A soma vale: %d \n", s);
				
				break;
			case 2:
				sub = n1 - n2;
				
				printf("A subtracao vale: %d \n", sub);
				
				break;
			case 3:
				mult = n1 * n2;
				
				printf("A multiplica��o vale: %d \n", mult);
				
				break;
			case 4:
				div = n1 / n2;
				
				printf("A divis�o vale: %d \n", div);
				
				break;
		}
	}
	printf("Saindo...\n");
	printf("Obrigado por usar nosso programa \n");
}
