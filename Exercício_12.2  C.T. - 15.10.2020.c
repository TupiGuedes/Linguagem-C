#include<stdio.h>

main()
{
	int i, v_p, opc, p;
	
	while (i != 5)
	{
		printf("Digite o valor da presta��o \n");
		scanf("%d", &v_p);
		
		printf("N�meros de presta��es: ");
		printf("Digite [1]: 5 \n");
		printf("Digite [2]: 10 \n");
		printf("Digite [3]: 12 \n");
		printf("Digite [4]: 24\n");
		printf("Digite [5]: Sair \n");
		printf("Digite sua op��o \n");
		scanf("%d", &opc);
		
		i = opc;
		
		switch (opc)
		{
			case 1:
				p = v_p / 5;
				
				break;
			case 2:
				p = v_p / 10;
				
				break;
			case 3:
				p = v_p / 12;
				
				break;
			case 4:
				p = v_p / 24;
				
				break;
		}
		printf("O valor da presta��o vale: %d", p);
	}
}
