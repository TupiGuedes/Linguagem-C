#include<stdio.h>

main()
{
	int i=0, n, op, s, par;
	
	while (op == 0)
	{
		printf("Digite um numero \n");
		scanf("%d", &n);
		
		if (n % 2 == 0)
		{
			s = s + n;
			
			printf("Par! \n");
		}
		if (n > 1000)
		{
			printf("Valor invalido! So aceitamos valores menores que mil. \n");
			break;
		}
		printf("Digite 0 para continuar ou 1 pra parar \n");
		scanf("%d", &op);
		
		i = op;
		
		i++;
	}
	printf("A soma vale: %d", s);
}

