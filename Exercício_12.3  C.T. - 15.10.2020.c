#include<stdio.h>

main()
{
	while (i != 5)
	{
		printf("Digite o primeiro valor \n");
		scanf("%d", &n1);
		printf("Digite o segundo valor \n");
		scanf("%d", &n2);
		
		printf("Menu das areas e do cubo: ");
		printf("Digite [1]: quadrado\n");
		printf("Digite [2]: triangulo\n");
		printf("Digite [3]: retangulo\n");
		printf("Digite [4]: cubo\n");
		printf("Digite [5]: Sair \n");
		printf("Digite sua opção \n");
		scanf("%d", &opc);
		
		i = opc;
		
		switch (opc)
		{
			case 1:
				v = n1 *n2;
				
				printf("A area do quadrado: %d", v);
				
				break;
			case 2:
				v = n1 * n2 / 2;
				
				printf("A area do triangulo: %d", v);
				
				break;
			case 3:
				v = n1 * n2;
				
				printf("A area do retangulo: %d", v);
				
				break;
			case 4:
				printf("Digite qualquer valor para saber o cubo \n");
				scanf("%d", c);
				
				v = c * c * c;
				
				printf("O cubo de %d vale: %d", c , v);
				
				break;
		}
		printf("O valor da prestação vale: %d", p);
	}
}
