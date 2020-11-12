#include<stdio.h>

main()
{
	float valor_prod, v_final;
	int esc;
	
	printf("Digite o valor total dos produtos \nR$");
	scanf("%f", &valor_prod);
	
	printf("Menu-de-prestações \n");
	printf("Digite 1: 5 \n");
	printf("Digite 2: 10 \n");
	printf("Digite 3: 12 \n");
	printf("Digite 4: 14 \n");
	printf("Digite 5: Sair do programa \n");
	printf("------------------------------ \n");
	printf("Digite sua escolha \n");
	scanf("%d", &esc);
	
	switch(esc)
	{
		case 1:
			v_final = valor_prod / 5;
			break;
		case 2:
			v_final = valor_prod / 10;
			break;
		case 3:
			v_final = valor_prod / 12;
			break;
		case 4:
			v_final = valor_prod / 14;
			break;
		default:
			printf("Saindo... \nObrigado por usar nosso programa.");
	}
	printf("\nO valor da prestação: R$ %.2f", v_final);
}
