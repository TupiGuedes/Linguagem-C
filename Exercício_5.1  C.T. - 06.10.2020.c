#include<stdio.h>

main()
{
	int n1, n2, esc, s, sub, mult, div;
	
	printf("Digite o primeiro valor \n");
	scanf("%d", &n1);
	printf("Digite o segundo valor \n");
	scanf("%d", &n2);
	
	printf("------------Menu------------- \n");
	printf("Digite 1: Somar \n");
	printf("Digite 2: Subtrair \n");
	printf("Digite 3: Multiplica��o \n");
	printf("Digite 4: Divis�o \n");
	printf("Digite 5: Sair do programa \n");
	printf("------------------------------ \n");
	printf("Digite sua escolha \n");
	scanf("%d", &esc);
	
	switch(esc)
	{
		case 1:
			s = n1 + n2;
			printf("Valor da soma: %d", s);
			break;
		case 2:
			sub = n1 - n2;
			printf("Valor da subtra��o: %d", sub);
			break;
		case 3:
			mult = n1 * n2;
			printf("Valor da multiplica��o: %d", mult);
			break;
		case 4:
			div = n1 / n2;
			printf("Valor da divis�o: %d", div);
			break;
		default:
			printf("Saindo...");
			printf("Obrigado por usar nosso programa.");
	}
}
