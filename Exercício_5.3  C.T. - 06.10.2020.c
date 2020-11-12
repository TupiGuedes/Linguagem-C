#include<stdio.h>

main()
{
	int n1, n2, esc, a_quad, a_trian, a_retan, n, cubo;
	
	printf("Digite a base \n");
	scanf("%d", &n1);
	printf("Digite a altura \n");
	scanf("%d", &n2);
	
	printf("Digite 1: Área do quadrado \n");
	printf("Digite 2: Área do triângulo \n");
	printf("Digite 3: Área do retângulo \n");
	printf("Digite 4: Cubo de um número\n ");
	printf("Digite 5: Sair do programa \n");
	scanf("%d", &esc);
	
	switch(esc)
	{
		case 1:
			a_quad = n1 * n2;
			
			printf("A área do quadrado: %d", a_quad);
			break;
		case 2:
			a_trian = (n1 * n2) / 2;
			
			printf("A área do triângulo: %d", a_trian);
			break;
		case 3:
			a_retan = n1 * n2;
			
			printf("A área do retângulo: %d", a_retan);
			break;
		case 4:
			printf("Digite um número para calcular o cubo \n");
			scanf("%d", &n);
			
			cubo = n * n * n;
			
			printf("Valor do cubo: %d", cubo);
			break;
		default:
			printf("Saindo... \nObrigado por usar nosso programa.");
	}
}
