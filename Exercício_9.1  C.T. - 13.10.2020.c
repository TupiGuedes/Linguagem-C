#include<stdio.h>

main()
{
	int c, c_2=0, i, m, x, x_2, ida, quant_f, quant_l;
	
	printf("Digite o total de pessoas \n");
	scanf("%d", &quant_f);
	
	for (i=1; i<=quant_f; i++)
	{
		printf("Digite sua idade \n");
		scanf("%d", &ida);
		printf("Digite a quantidade de livros comprados \n");
		scanf("%d", &quant_l);
		
		if (quant_l >= 5)
		{
			c++;
		}
		else
		{
			x = x + ida;
		}
		if (ida <= 10)
		{
			c_2++;
		}
	}
	m = x_2 / quant_f;
	printf("Quantidade de pessoas que compraram 5 ou mais livros: %d \n", c);	
	printf("A média: %d \n", m);
	printf("Quantidade total menores que 10 anos: %d \n", c_2);
}
